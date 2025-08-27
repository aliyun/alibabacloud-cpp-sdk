// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROJECTDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROJECTDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ProjectDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProjectDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, ProjectDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    ProjectDeleteRequest() = default ;
    ProjectDeleteRequest(const ProjectDeleteRequest &) = default ;
    ProjectDeleteRequest(ProjectDeleteRequest &&) = default ;
    ProjectDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProjectDeleteRequest() = default ;
    ProjectDeleteRequest& operator=(const ProjectDeleteRequest &) = default ;
    ProjectDeleteRequest& operator=(ProjectDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->thirdPartId_ != nullptr; };
    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline ProjectDeleteRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
