// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERSOPHONPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERSOPHONPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class TriggerSophonPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerSophonPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerSophonPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TriggerSophonPlaybookResponseBody() = default ;
    TriggerSophonPlaybookResponseBody(const TriggerSophonPlaybookResponseBody &) = default ;
    TriggerSophonPlaybookResponseBody(TriggerSophonPlaybookResponseBody &&) = default ;
    TriggerSophonPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerSophonPlaybookResponseBody() = default ;
    TriggerSophonPlaybookResponseBody& operator=(const TriggerSophonPlaybookResponseBody &) = default ;
    TriggerSophonPlaybookResponseBody& operator=(TriggerSophonPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SophonTaskId, sophonTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SophonTaskId, sophonTaskId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sophonTaskId_ == nullptr; };
      // sophonTaskId Field Functions 
      bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
      void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
      inline string getSophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
      inline Data& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


    protected:
      // The custom ID. If you do not specify this parameter when the playbook is triggered, a random ID is generated for fault locating and troubleshooting.
      shared_ptr<string> sophonTaskId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TriggerSophonPlaybookResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TriggerSophonPlaybookResponseBody::Data) };
    inline TriggerSophonPlaybookResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TriggerSophonPlaybookResponseBody::Data) };
    inline TriggerSophonPlaybookResponseBody& setData(const TriggerSophonPlaybookResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TriggerSophonPlaybookResponseBody& setData(TriggerSophonPlaybookResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TriggerSophonPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details that is returned after the command or playbook is triggered.
    shared_ptr<TriggerSophonPlaybookResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
