// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETABLETHEMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETABLETHEMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteTableThemeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTableThemeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTableThemeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
    };
    DeleteTableThemeRequest() = default ;
    DeleteTableThemeRequest(const DeleteTableThemeRequest &) = default ;
    DeleteTableThemeRequest(DeleteTableThemeRequest &&) = default ;
    DeleteTableThemeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTableThemeRequest() = default ;
    DeleteTableThemeRequest& operator=(const DeleteTableThemeRequest &) = default ;
    DeleteTableThemeRequest& operator=(DeleteTableThemeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->themeId_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteTableThemeRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // themeId Field Functions 
    bool hasThemeId() const { return this->themeId_ != nullptr;};
    void deleteThemeId() { this->themeId_ = nullptr;};
    inline int64_t themeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, 0L) };
    inline DeleteTableThemeRequest& setThemeId(int64_t themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


  protected:
    // The ID of the DataWorks workspace.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The ID of the theme.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> themeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
