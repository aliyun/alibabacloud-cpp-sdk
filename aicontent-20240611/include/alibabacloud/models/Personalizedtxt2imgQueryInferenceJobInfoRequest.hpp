// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGQUERYINFERENCEJOBINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGQUERYINFERENCEJOBINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class Personalizedtxt2imgQueryInferenceJobInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Personalizedtxt2imgQueryInferenceJobInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(inferenceJobId, inferenceJobId_);
    };
    friend void from_json(const Darabonba::Json& j, Personalizedtxt2imgQueryInferenceJobInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(inferenceJobId, inferenceJobId_);
    };
    Personalizedtxt2imgQueryInferenceJobInfoRequest() = default ;
    Personalizedtxt2imgQueryInferenceJobInfoRequest(const Personalizedtxt2imgQueryInferenceJobInfoRequest &) = default ;
    Personalizedtxt2imgQueryInferenceJobInfoRequest(Personalizedtxt2imgQueryInferenceJobInfoRequest &&) = default ;
    Personalizedtxt2imgQueryInferenceJobInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Personalizedtxt2imgQueryInferenceJobInfoRequest() = default ;
    Personalizedtxt2imgQueryInferenceJobInfoRequest& operator=(const Personalizedtxt2imgQueryInferenceJobInfoRequest &) = default ;
    Personalizedtxt2imgQueryInferenceJobInfoRequest& operator=(Personalizedtxt2imgQueryInferenceJobInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inferenceJobId_ == nullptr; };
    // inferenceJobId Field Functions 
    bool hasInferenceJobId() const { return this->inferenceJobId_ != nullptr;};
    void deleteInferenceJobId() { this->inferenceJobId_ = nullptr;};
    inline string getInferenceJobId() const { DARABONBA_PTR_GET_DEFAULT(inferenceJobId_, "") };
    inline Personalizedtxt2imgQueryInferenceJobInfoRequest& setInferenceJobId(string inferenceJobId) { DARABONBA_PTR_SET_VALUE(inferenceJobId_, inferenceJobId) };


  protected:
    // This parameter is required.
    shared_ptr<string> inferenceJobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
