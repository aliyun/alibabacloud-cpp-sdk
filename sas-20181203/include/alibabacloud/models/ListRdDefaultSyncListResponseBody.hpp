// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRDDEFAULTSYNCLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRDDEFAULTSYNCLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRdDefaultSyncListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListRdDefaultSyncListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRdDefaultSyncListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRdDefaultSyncListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRdDefaultSyncListResponseBody() = default ;
    ListRdDefaultSyncListResponseBody(const ListRdDefaultSyncListResponseBody &) = default ;
    ListRdDefaultSyncListResponseBody(ListRdDefaultSyncListResponseBody &&) = default ;
    ListRdDefaultSyncListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRdDefaultSyncListResponseBody() = default ;
    ListRdDefaultSyncListResponseBody& operator=(const ListRdDefaultSyncListResponseBody &) = default ;
    ListRdDefaultSyncListResponseBody& operator=(ListRdDefaultSyncListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRdDefaultSyncListResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListRdDefaultSyncListResponseBodyData) };
    inline ListRdDefaultSyncListResponseBodyData data() { DARABONBA_PTR_GET(data_, ListRdDefaultSyncListResponseBodyData) };
    inline ListRdDefaultSyncListResponseBody& setData(const ListRdDefaultSyncListResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRdDefaultSyncListResponseBody& setData(ListRdDefaultSyncListResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRdDefaultSyncListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned if the call is successful.
    std::shared_ptr<ListRdDefaultSyncListResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
