// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    UpdateMemoryRequest() = default ;
    UpdateMemoryRequest(const UpdateMemoryRequest &) = default ;
    UpdateMemoryRequest(UpdateMemoryRequest &&) = default ;
    UpdateMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMemoryRequest() = default ;
    UpdateMemoryRequest& operator=(const UpdateMemoryRequest &) = default ;
    UpdateMemoryRequest& operator=(UpdateMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMemoryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
