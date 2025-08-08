// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELPROVIDERSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_MODELPROVIDERSCHEMA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelProviderSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelProviderSchema& obj) { 
      DARABONBA_PTR_TO_JSON(detail, detail_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModelProviderSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(detail, detail_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModelProviderSchema() = default ;
    ModelProviderSchema(const ModelProviderSchema &) = default ;
    ModelProviderSchema(ModelProviderSchema &&) = default ;
    ModelProviderSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelProviderSchema() = default ;
    ModelProviderSchema& operator=(const ModelProviderSchema &) = default ;
    ModelProviderSchema& operator=(ModelProviderSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->type_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline ModelProviderSchema& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModelProviderSchema& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
