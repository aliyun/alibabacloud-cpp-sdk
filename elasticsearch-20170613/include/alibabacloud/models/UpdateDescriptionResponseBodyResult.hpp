// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDESCRIPTIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDESCRIPTIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateDescriptionResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDescriptionResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDescriptionResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    UpdateDescriptionResponseBodyResult() = default ;
    UpdateDescriptionResponseBodyResult(const UpdateDescriptionResponseBodyResult &) = default ;
    UpdateDescriptionResponseBodyResult(UpdateDescriptionResponseBodyResult &&) = default ;
    UpdateDescriptionResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDescriptionResponseBodyResult() = default ;
    UpdateDescriptionResponseBodyResult& operator=(const UpdateDescriptionResponseBodyResult &) = default ;
    UpdateDescriptionResponseBodyResult& operator=(UpdateDescriptionResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDescriptionResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
