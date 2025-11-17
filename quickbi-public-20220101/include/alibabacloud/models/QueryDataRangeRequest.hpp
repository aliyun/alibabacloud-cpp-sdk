// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATARANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATARANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataRangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataRangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataRangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryDataRangeRequest() = default ;
    QueryDataRangeRequest(const QueryDataRangeRequest &) = default ;
    QueryDataRangeRequest(QueryDataRangeRequest &&) = default ;
    QueryDataRangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataRangeRequest() = default ;
    QueryDataRangeRequest& operator=(const QueryDataRangeRequest &) = default ;
    QueryDataRangeRequest& operator=(QueryDataRangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && return this->type_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryDataRangeRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryDataRangeRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Name, for fuzzy search.
    std::shared_ptr<string> keyword_ = nullptr;
    // Data range type:
    // 
    // - llmCube: LlmCube resource.
    // - llmCubeTheme: Analysis theme.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
