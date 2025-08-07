// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPARAMETERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPARAMETERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateParameterGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateParameterGroupResponseBody() = default ;
    CreateParameterGroupResponseBody(const CreateParameterGroupResponseBody &) = default ;
    CreateParameterGroupResponseBody(CreateParameterGroupResponseBody &&) = default ;
    CreateParameterGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateParameterGroupResponseBody() = default ;
    CreateParameterGroupResponseBody& operator=(const CreateParameterGroupResponseBody &) = default ;
    CreateParameterGroupResponseBody& operator=(CreateParameterGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterGroupId_ != nullptr
        && this->requestId_ != nullptr; };
    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string parameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline CreateParameterGroupResponseBody& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateParameterGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the parameter template.
    // 
    // > You can call the [DescribeParameterGroups](https://help.aliyun.com/document_detail/207178.html) operation to query the details of all parameter templates of a specified region, such as the ID of a parameter template.
    std::shared_ptr<string> parameterGroupId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
