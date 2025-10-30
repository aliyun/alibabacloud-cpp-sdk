// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELDETAILSBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELDETAILSBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeModelDetailsByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelDetailsByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelDetailsByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
    };
    DescribeModelDetailsByIdRequest() = default ;
    DescribeModelDetailsByIdRequest(const DescribeModelDetailsByIdRequest &) = default ;
    DescribeModelDetailsByIdRequest(DescribeModelDetailsByIdRequest &&) = default ;
    DescribeModelDetailsByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelDetailsByIdRequest() = default ;
    DescribeModelDetailsByIdRequest& operator=(const DescribeModelDetailsByIdRequest &) = default ;
    DescribeModelDetailsByIdRequest& operator=(DescribeModelDetailsByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelId_ == nullptr
        && return this->regId_ == nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline DescribeModelDetailsByIdRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeModelDetailsByIdRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Model ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> modelId_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
