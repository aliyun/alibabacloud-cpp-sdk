// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALGORITHMVERSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALGORITHMVERSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateAlgorithmVersionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlgorithmVersionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmSpec, algorithmSpecShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlgorithmVersionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmSpec, algorithmSpecShrink_);
    };
    CreateAlgorithmVersionShrinkRequest() = default ;
    CreateAlgorithmVersionShrinkRequest(const CreateAlgorithmVersionShrinkRequest &) = default ;
    CreateAlgorithmVersionShrinkRequest(CreateAlgorithmVersionShrinkRequest &&) = default ;
    CreateAlgorithmVersionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlgorithmVersionShrinkRequest() = default ;
    CreateAlgorithmVersionShrinkRequest& operator=(const CreateAlgorithmVersionShrinkRequest &) = default ;
    CreateAlgorithmVersionShrinkRequest& operator=(CreateAlgorithmVersionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithmSpecShrink_ == nullptr; };
    // algorithmSpecShrink Field Functions 
    bool hasAlgorithmSpecShrink() const { return this->algorithmSpecShrink_ != nullptr;};
    void deleteAlgorithmSpecShrink() { this->algorithmSpecShrink_ = nullptr;};
    inline string algorithmSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(algorithmSpecShrink_, "") };
    inline CreateAlgorithmVersionShrinkRequest& setAlgorithmSpecShrink(string algorithmSpecShrink) { DARABONBA_PTR_SET_VALUE(algorithmSpecShrink_, algorithmSpecShrink) };


  protected:
    std::shared_ptr<string> algorithmSpecShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
