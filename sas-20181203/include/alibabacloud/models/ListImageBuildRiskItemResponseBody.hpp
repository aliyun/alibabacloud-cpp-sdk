// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEBUILDRISKITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEBUILDRISKITEMRESPONSEBODY_HPP_
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
  class ListImageBuildRiskItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageBuildRiskItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageBuildRiskItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListImageBuildRiskItemResponseBody() = default ;
    ListImageBuildRiskItemResponseBody(const ListImageBuildRiskItemResponseBody &) = default ;
    ListImageBuildRiskItemResponseBody(ListImageBuildRiskItemResponseBody &&) = default ;
    ListImageBuildRiskItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageBuildRiskItemResponseBody() = default ;
    ListImageBuildRiskItemResponseBody& operator=(const ListImageBuildRiskItemResponseBody &) = default ;
    ListImageBuildRiskItemResponseBody& operator=(ListImageBuildRiskItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ItemKey, itemKey_);
        DARABONBA_PTR_TO_JSON(ItemName, itemName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemKey, itemKey_);
        DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
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
      virtual bool empty() const override { return this->itemKey_ == nullptr
        && this->itemName_ == nullptr; };
      // itemKey Field Functions 
      bool hasItemKey() const { return this->itemKey_ != nullptr;};
      void deleteItemKey() { this->itemKey_ = nullptr;};
      inline string getItemKey() const { DARABONBA_PTR_GET_DEFAULT(itemKey_, "") };
      inline Data& setItemKey(string itemKey) { DARABONBA_PTR_SET_VALUE(itemKey_, itemKey) };


      // itemName Field Functions 
      bool hasItemName() const { return this->itemName_ != nullptr;};
      void deleteItemName() { this->itemName_ = nullptr;};
      inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
      inline Data& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    protected:
      // The type key of the risky build command.
      shared_ptr<string> itemKey_ {};
      // The type name of the risky build command.
      shared_ptr<string> itemName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListImageBuildRiskItemResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListImageBuildRiskItemResponseBody::Data>) };
    inline vector<ListImageBuildRiskItemResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListImageBuildRiskItemResponseBody::Data>) };
    inline ListImageBuildRiskItemResponseBody& setData(const vector<ListImageBuildRiskItemResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListImageBuildRiskItemResponseBody& setData(vector<ListImageBuildRiskItemResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageBuildRiskItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<vector<ListImageBuildRiskItemResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
