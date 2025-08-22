// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLRANDSLSPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESLRANDSLSPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSlrAndSlsProjectResponseBodySlsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateSlrAndSlsProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlrAndSlsProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlrAndSlsProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
    };
    CreateSlrAndSlsProjectResponseBody() = default ;
    CreateSlrAndSlsProjectResponseBody(const CreateSlrAndSlsProjectResponseBody &) = default ;
    CreateSlrAndSlsProjectResponseBody(CreateSlrAndSlsProjectResponseBody &&) = default ;
    CreateSlrAndSlsProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlrAndSlsProjectResponseBody() = default ;
    CreateSlrAndSlsProjectResponseBody& operator=(const CreateSlrAndSlsProjectResponseBody &) = default ;
    CreateSlrAndSlsProjectResponseBody& operator=(CreateSlrAndSlsProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->slsInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSlrAndSlsProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const CreateSlrAndSlsProjectResponseBodySlsInfo & slsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, CreateSlrAndSlsProjectResponseBodySlsInfo) };
    inline CreateSlrAndSlsProjectResponseBodySlsInfo slsInfo() { DARABONBA_PTR_GET(slsInfo_, CreateSlrAndSlsProjectResponseBodySlsInfo) };
    inline CreateSlrAndSlsProjectResponseBody& setSlsInfo(const CreateSlrAndSlsProjectResponseBodySlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline CreateSlrAndSlsProjectResponseBody& setSlsInfo(CreateSlrAndSlsProjectResponseBodySlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about Log Service.
    std::shared_ptr<CreateSlrAndSlsProjectResponseBodySlsInfo> slsInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
