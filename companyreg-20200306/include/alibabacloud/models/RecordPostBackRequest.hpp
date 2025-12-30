// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECORDPOSTBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECORDPOSTBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class RecordPostBackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecordPostBackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(contactor, contactor_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(entityKey, entityKey_);
    };
    friend void from_json(const Darabonba::Json& j, RecordPostBackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(contactor, contactor_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(entityKey, entityKey_);
    };
    RecordPostBackRequest() = default ;
    RecordPostBackRequest(const RecordPostBackRequest &) = default ;
    RecordPostBackRequest(RecordPostBackRequest &&) = default ;
    RecordPostBackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecordPostBackRequest() = default ;
    RecordPostBackRequest& operator=(const RecordPostBackRequest &) = default ;
    RecordPostBackRequest& operator=(RecordPostBackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->contactor_ == nullptr && this->content_ == nullptr && this->entityKey_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline RecordPostBackRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline RecordPostBackRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // contactor Field Functions 
    bool hasContactor() const { return this->contactor_ != nullptr;};
    void deleteContactor() { this->contactor_ = nullptr;};
    inline string getContactor() const { DARABONBA_PTR_GET_DEFAULT(contactor_, "") };
    inline RecordPostBackRequest& setContactor(string contactor) { DARABONBA_PTR_SET_VALUE(contactor_, contactor) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RecordPostBackRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // entityKey Field Functions 
    bool hasEntityKey() const { return this->entityKey_ != nullptr;};
    void deleteEntityKey() { this->entityKey_ = nullptr;};
    inline string getEntityKey() const { DARABONBA_PTR_GET_DEFAULT(entityKey_, "") };
    inline RecordPostBackRequest& setEntityKey(string entityKey) { DARABONBA_PTR_SET_VALUE(entityKey_, entityKey) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    // This parameter is required.
    shared_ptr<string> contactor_ {};
    // This parameter is required.
    shared_ptr<string> content_ {};
    // This parameter is required.
    shared_ptr<string> entityKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
