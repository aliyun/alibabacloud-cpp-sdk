// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCACERTIFICATELOGRESPONSEBODYLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCACERTIFICATELOGRESPONSEBODYLOGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListCACertificateLogResponseBodyLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCACertificateLogResponseBodyLogList& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCACertificateLogResponseBodyLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
    };
    ListCACertificateLogResponseBodyLogList() = default ;
    ListCACertificateLogResponseBodyLogList(const ListCACertificateLogResponseBodyLogList &) = default ;
    ListCACertificateLogResponseBodyLogList(ListCACertificateLogResponseBodyLogList &&) = default ;
    ListCACertificateLogResponseBodyLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCACertificateLogResponseBodyLogList() = default ;
    ListCACertificateLogResponseBodyLogList& operator=(const ListCACertificateLogResponseBodyLogList &) = default ;
    ListCACertificateLogResponseBodyLogList& operator=(ListCACertificateLogResponseBodyLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->createTime_ == nullptr && return this->identifier_ == nullptr && return this->opType_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListCACertificateLogResponseBodyLogList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListCACertificateLogResponseBodyLogList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListCACertificateLogResponseBodyLogList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline ListCACertificateLogResponseBodyLogList& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> opType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
