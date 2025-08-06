// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALGORITHMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALGORITHMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UpdateAlgorithmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlgorithmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmDescription, algorithmDescription_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlgorithmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmDescription, algorithmDescription_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
    };
    UpdateAlgorithmRequest() = default ;
    UpdateAlgorithmRequest(const UpdateAlgorithmRequest &) = default ;
    UpdateAlgorithmRequest(UpdateAlgorithmRequest &&) = default ;
    UpdateAlgorithmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlgorithmRequest() = default ;
    UpdateAlgorithmRequest& operator=(const UpdateAlgorithmRequest &) = default ;
    UpdateAlgorithmRequest& operator=(UpdateAlgorithmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithmDescription_ != nullptr
        && this->displayName_ != nullptr; };
    // algorithmDescription Field Functions 
    bool hasAlgorithmDescription() const { return this->algorithmDescription_ != nullptr;};
    void deleteAlgorithmDescription() { this->algorithmDescription_ = nullptr;};
    inline string algorithmDescription() const { DARABONBA_PTR_GET_DEFAULT(algorithmDescription_, "") };
    inline UpdateAlgorithmRequest& setAlgorithmDescription(string algorithmDescription) { DARABONBA_PTR_SET_VALUE(algorithmDescription_, algorithmDescription) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateAlgorithmRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


  protected:
    std::shared_ptr<string> algorithmDescription_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
