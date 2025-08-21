// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOUNTINSTANCESDGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOUNTINSTANCESDGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MountInstanceSDGResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class MountInstanceSDGResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MountInstanceSDGResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MountInstanceSDGResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MountInstanceSDGResponseBody() = default ;
    MountInstanceSDGResponseBody(const MountInstanceSDGResponseBody &) = default ;
    MountInstanceSDGResponseBody(MountInstanceSDGResponseBody &&) = default ;
    MountInstanceSDGResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MountInstanceSDGResponseBody() = default ;
    MountInstanceSDGResponseBody& operator=(const MountInstanceSDGResponseBody &) = default ;
    MountInstanceSDGResponseBody& operator=(MountInstanceSDGResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MountInstanceSDGResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, MountInstanceSDGResponseBodyData) };
    inline MountInstanceSDGResponseBodyData data() { DARABONBA_PTR_GET(data_, MountInstanceSDGResponseBodyData) };
    inline MountInstanceSDGResponseBody& setData(const MountInstanceSDGResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MountInstanceSDGResponseBody& setData(MountInstanceSDGResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MountInstanceSDGResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data object.
    std::shared_ptr<MountInstanceSDGResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
