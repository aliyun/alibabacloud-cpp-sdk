// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXISTSCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXISTSCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeExistSceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExistSceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExistSceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeExistSceneResponseBody() = default ;
    DescribeExistSceneResponseBody(const DescribeExistSceneResponseBody &) = default ;
    DescribeExistSceneResponseBody(DescribeExistSceneResponseBody &&) = default ;
    DescribeExistSceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExistSceneResponseBody() = default ;
    DescribeExistSceneResponseBody& operator=(const DescribeExistSceneResponseBody &) = default ;
    DescribeExistSceneResponseBody& operator=(DescribeExistSceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExistSceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool getData() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline DescribeExistSceneResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Data object
    shared_ptr<bool> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
