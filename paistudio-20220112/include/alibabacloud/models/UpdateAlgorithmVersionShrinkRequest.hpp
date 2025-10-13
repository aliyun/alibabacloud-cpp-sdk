// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALGORITHMVERSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALGORITHMVERSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UpdateAlgorithmVersionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlgorithmVersionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmSpec, algorithmSpecShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlgorithmVersionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmSpec, algorithmSpecShrink_);
    };
    UpdateAlgorithmVersionShrinkRequest() = default ;
    UpdateAlgorithmVersionShrinkRequest(const UpdateAlgorithmVersionShrinkRequest &) = default ;
    UpdateAlgorithmVersionShrinkRequest(UpdateAlgorithmVersionShrinkRequest &&) = default ;
    UpdateAlgorithmVersionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlgorithmVersionShrinkRequest() = default ;
    UpdateAlgorithmVersionShrinkRequest& operator=(const UpdateAlgorithmVersionShrinkRequest &) = default ;
    UpdateAlgorithmVersionShrinkRequest& operator=(UpdateAlgorithmVersionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithmSpecShrink_ == nullptr; };
    // algorithmSpecShrink Field Functions 
    bool hasAlgorithmSpecShrink() const { return this->algorithmSpecShrink_ != nullptr;};
    void deleteAlgorithmSpecShrink() { this->algorithmSpecShrink_ = nullptr;};
    inline string algorithmSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(algorithmSpecShrink_, "") };
    inline UpdateAlgorithmVersionShrinkRequest& setAlgorithmSpecShrink(string algorithmSpecShrink) { DARABONBA_PTR_SET_VALUE(algorithmSpecShrink_, algorithmSpecShrink) };


  protected:
    std::shared_ptr<string> algorithmSpecShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
