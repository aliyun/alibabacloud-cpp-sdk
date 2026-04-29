// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUNKNOWNTHREATDETECTPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDUNKNOWNTHREATDETECTPROCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddUnknownThreatDetectProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUnknownThreatDetectProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdList, idList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddUnknownThreatDetectProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddUnknownThreatDetectProcessResponseBody() = default ;
    AddUnknownThreatDetectProcessResponseBody(const AddUnknownThreatDetectProcessResponseBody &) = default ;
    AddUnknownThreatDetectProcessResponseBody(AddUnknownThreatDetectProcessResponseBody &&) = default ;
    AddUnknownThreatDetectProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUnknownThreatDetectProcessResponseBody() = default ;
    AddUnknownThreatDetectProcessResponseBody& operator=(const AddUnknownThreatDetectProcessResponseBody &) = default ;
    AddUnknownThreatDetectProcessResponseBody& operator=(AddUnknownThreatDetectProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdList& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, IdList& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      IdList() = default ;
      IdList(const IdList &) = default ;
      IdList(IdList &&) = default ;
      IdList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdList() = default ;
      IdList& operator=(const IdList &) = default ;
      IdList& operator=(IdList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline IdList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->idList_ == nullptr
        && this->requestId_ == nullptr; };
    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<AddUnknownThreatDetectProcessResponseBody::IdList> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<AddUnknownThreatDetectProcessResponseBody::IdList>) };
    inline vector<AddUnknownThreatDetectProcessResponseBody::IdList> getIdList() { DARABONBA_PTR_GET(idList_, vector<AddUnknownThreatDetectProcessResponseBody::IdList>) };
    inline AddUnknownThreatDetectProcessResponseBody& setIdList(const vector<AddUnknownThreatDetectProcessResponseBody::IdList> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline AddUnknownThreatDetectProcessResponseBody& setIdList(vector<AddUnknownThreatDetectProcessResponseBody::IdList> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddUnknownThreatDetectProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<AddUnknownThreatDetectProcessResponseBody::IdList>> idList_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
