// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETADBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETADBINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMetaDBInfoResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaDBInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaDBInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaDBInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMetaDBInfoResponseBody() = default ;
    GetMetaDBInfoResponseBody(const GetMetaDBInfoResponseBody &) = default ;
    GetMetaDBInfoResponseBody(GetMetaDBInfoResponseBody &&) = default ;
    GetMetaDBInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaDBInfoResponseBody() = default ;
    GetMetaDBInfoResponseBody& operator=(const GetMetaDBInfoResponseBody &) = default ;
    GetMetaDBInfoResponseBody& operator=(GetMetaDBInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaDBInfoResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetMetaDBInfoResponseBodyData) };
    inline GetMetaDBInfoResponseBodyData data() { DARABONBA_PTR_GET(data_, GetMetaDBInfoResponseBodyData) };
    inline GetMetaDBInfoResponseBody& setData(const GetMetaDBInfoResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaDBInfoResponseBody& setData(GetMetaDBInfoResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaDBInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The basic metadata information.
    std::shared_ptr<GetMetaDBInfoResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
