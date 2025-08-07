// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateMemoryNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
    };
    CreateMemoryNodeRequest() = default ;
    CreateMemoryNodeRequest(const CreateMemoryNodeRequest &) = default ;
    CreateMemoryNodeRequest(CreateMemoryNodeRequest &&) = default ;
    CreateMemoryNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryNodeRequest() = default ;
    CreateMemoryNodeRequest& operator=(const CreateMemoryNodeRequest &) = default ;
    CreateMemoryNodeRequest& operator=(CreateMemoryNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateMemoryNodeRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
