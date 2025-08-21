// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEOBJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEOBJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSceneDefenseObjectsResponseBodyObjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSceneDefenseObjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneDefenseObjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneDefenseObjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSceneDefenseObjectsResponseBody() = default ;
    DescribeSceneDefenseObjectsResponseBody(const DescribeSceneDefenseObjectsResponseBody &) = default ;
    DescribeSceneDefenseObjectsResponseBody(DescribeSceneDefenseObjectsResponseBody &&) = default ;
    DescribeSceneDefenseObjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneDefenseObjectsResponseBody() = default ;
    DescribeSceneDefenseObjectsResponseBody& operator=(const DescribeSceneDefenseObjectsResponseBody &) = default ;
    DescribeSceneDefenseObjectsResponseBody& operator=(DescribeSceneDefenseObjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->objects_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline const vector<DescribeSceneDefenseObjectsResponseBodyObjects> & objects() const { DARABONBA_PTR_GET_CONST(objects_, vector<DescribeSceneDefenseObjectsResponseBodyObjects>) };
    inline vector<DescribeSceneDefenseObjectsResponseBodyObjects> objects() { DARABONBA_PTR_GET(objects_, vector<DescribeSceneDefenseObjectsResponseBodyObjects>) };
    inline DescribeSceneDefenseObjectsResponseBody& setObjects(const vector<DescribeSceneDefenseObjectsResponseBodyObjects> & objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };
    inline DescribeSceneDefenseObjectsResponseBody& setObjects(vector<DescribeSceneDefenseObjectsResponseBodyObjects> && objects) { DARABONBA_PTR_SET_RVALUE(objects_, objects) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSceneDefenseObjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSceneDefenseObjectsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the protected assets.
    std::shared_ptr<vector<DescribeSceneDefenseObjectsResponseBodyObjects>> objects_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
