// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPackagesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListPackagesResponseBody() = default ;
    ListPackagesResponseBody(const ListPackagesResponseBody &) = default ;
    ListPackagesResponseBody(ListPackagesResponseBody &&) = default ;
    ListPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPackagesResponseBody() = default ;
    ListPackagesResponseBody& operator=(const ListPackagesResponseBody &) = default ;
    ListPackagesResponseBody& operator=(ListPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPackagesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListPackagesResponseBodyData) };
    inline ListPackagesResponseBodyData data() { DARABONBA_PTR_GET(data_, ListPackagesResponseBodyData) };
    inline ListPackagesResponseBody& setData(const ListPackagesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPackagesResponseBody& setData(ListPackagesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<ListPackagesResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
