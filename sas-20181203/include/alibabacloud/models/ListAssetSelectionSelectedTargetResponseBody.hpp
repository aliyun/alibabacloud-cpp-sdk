// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETSELECTIONSELECTEDTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETSELECTIONSELECTEDTARGETRESPONSEBODY_HPP_
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
  class ListAssetSelectionSelectedTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetSelectionSelectedTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetSelectionSelectedTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAssetSelectionSelectedTargetResponseBody() = default ;
    ListAssetSelectionSelectedTargetResponseBody(const ListAssetSelectionSelectedTargetResponseBody &) = default ;
    ListAssetSelectionSelectedTargetResponseBody(ListAssetSelectionSelectedTargetResponseBody &&) = default ;
    ListAssetSelectionSelectedTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetSelectionSelectedTargetResponseBody() = default ;
    ListAssetSelectionSelectedTargetResponseBody& operator=(const ListAssetSelectionSelectedTargetResponseBody &) = default ;
    ListAssetSelectionSelectedTargetResponseBody& operator=(ListAssetSelectionSelectedTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
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
      virtual bool empty() const override { return this->targetId_ == nullptr
        && this->targetName_ == nullptr; };
      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Data& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline Data& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    protected:
      // The ID of the asset.
      shared_ptr<string> targetId_ {};
      // The name of the asset.
      shared_ptr<string> targetName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAssetSelectionSelectedTargetResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAssetSelectionSelectedTargetResponseBody::Data>) };
    inline vector<ListAssetSelectionSelectedTargetResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAssetSelectionSelectedTargetResponseBody::Data>) };
    inline ListAssetSelectionSelectedTargetResponseBody& setData(const vector<ListAssetSelectionSelectedTargetResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAssetSelectionSelectedTargetResponseBody& setData(vector<ListAssetSelectionSelectedTargetResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetSelectionSelectedTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<ListAssetSelectionSelectedTargetResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
