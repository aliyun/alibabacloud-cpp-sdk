// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALGORITHMVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALGORITHMVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AlgorithmSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UpdateAlgorithmVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlgorithmVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmSpec, algorithmSpec_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlgorithmVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmSpec, algorithmSpec_);
    };
    UpdateAlgorithmVersionRequest() = default ;
    UpdateAlgorithmVersionRequest(const UpdateAlgorithmVersionRequest &) = default ;
    UpdateAlgorithmVersionRequest(UpdateAlgorithmVersionRequest &&) = default ;
    UpdateAlgorithmVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlgorithmVersionRequest() = default ;
    UpdateAlgorithmVersionRequest& operator=(const UpdateAlgorithmVersionRequest &) = default ;
    UpdateAlgorithmVersionRequest& operator=(UpdateAlgorithmVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithmSpec_ == nullptr; };
    // algorithmSpec Field Functions 
    bool hasAlgorithmSpec() const { return this->algorithmSpec_ != nullptr;};
    void deleteAlgorithmSpec() { this->algorithmSpec_ = nullptr;};
    inline const AlgorithmSpec & getAlgorithmSpec() const { DARABONBA_PTR_GET_CONST(algorithmSpec_, AlgorithmSpec) };
    inline AlgorithmSpec getAlgorithmSpec() { DARABONBA_PTR_GET(algorithmSpec_, AlgorithmSpec) };
    inline UpdateAlgorithmVersionRequest& setAlgorithmSpec(const AlgorithmSpec & algorithmSpec) { DARABONBA_PTR_SET_VALUE(algorithmSpec_, algorithmSpec) };
    inline UpdateAlgorithmVersionRequest& setAlgorithmSpec(AlgorithmSpec && algorithmSpec) { DARABONBA_PTR_SET_RVALUE(algorithmSpec_, algorithmSpec) };


  protected:
    shared_ptr<AlgorithmSpec> algorithmSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
