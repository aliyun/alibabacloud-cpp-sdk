// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESLOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class CreateSlotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlotIds, slotIds_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlotIds, slotIds_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    CreateSlotsResponseBody() = default ;
    CreateSlotsResponseBody(const CreateSlotsResponseBody &) = default ;
    CreateSlotsResponseBody(CreateSlotsResponseBody &&) = default ;
    CreateSlotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlotsResponseBody() = default ;
    CreateSlotsResponseBody& operator=(const CreateSlotsResponseBody &) = default ;
    CreateSlotsResponseBody& operator=(CreateSlotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slotIds_ == nullptr && this->summary_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSlotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slotIds Field Functions 
    bool hasSlotIds() const { return this->slotIds_ != nullptr;};
    void deleteSlotIds() { this->slotIds_ = nullptr;};
    inline string getSlotIds() const { DARABONBA_PTR_GET_DEFAULT(slotIds_, "") };
    inline CreateSlotsResponseBody& setSlotIds(string slotIds) { DARABONBA_PTR_SET_VALUE(slotIds_, slotIds) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const map<string, string> & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, map<string, string>) };
    inline map<string, string> getSummary() { DARABONBA_PTR_GET(summary_, map<string, string>) };
    inline CreateSlotsResponseBody& setSummary(const map<string, string> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline CreateSlotsResponseBody& setSummary(map<string, string> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> slotIds_ {};
    shared_ptr<map<string, string>> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
