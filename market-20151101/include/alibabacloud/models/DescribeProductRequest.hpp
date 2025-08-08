// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(QueryDraft, queryDraft_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(QueryDraft, queryDraft_);
    };
    DescribeProductRequest() = default ;
    DescribeProductRequest(const DescribeProductRequest &) = default ;
    DescribeProductRequest(DescribeProductRequest &&) = default ;
    DescribeProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductRequest() = default ;
    DescribeProductRequest& operator=(const DescribeProductRequest &) = default ;
    DescribeProductRequest& operator=(DescribeProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->code_ != nullptr && this->queryDraft_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribeProductRequest& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeProductRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // queryDraft Field Functions 
    bool hasQueryDraft() const { return this->queryDraft_ != nullptr;};
    void deleteQueryDraft() { this->queryDraft_ = nullptr;};
    inline bool queryDraft() const { DARABONBA_PTR_GET_DEFAULT(queryDraft_, false) };
    inline DescribeProductRequest& setQueryDraft(bool queryDraft) { DARABONBA_PTR_SET_VALUE(queryDraft_, queryDraft) };


  protected:
    // AliUid
    std::shared_ptr<string> aliUid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<bool> queryDraft_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
