// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETSELECTIONSELECTEDTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETSELECTIONSELECTEDTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAssetSelectionSelectedTargetResponseBodyData.hpp>
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
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAssetSelectionSelectedTargetResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAssetSelectionSelectedTargetResponseBodyData>) };
    inline vector<ListAssetSelectionSelectedTargetResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListAssetSelectionSelectedTargetResponseBodyData>) };
    inline ListAssetSelectionSelectedTargetResponseBody& setData(const vector<ListAssetSelectionSelectedTargetResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAssetSelectionSelectedTargetResponseBody& setData(vector<ListAssetSelectionSelectedTargetResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetSelectionSelectedTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<ListAssetSelectionSelectedTargetResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
