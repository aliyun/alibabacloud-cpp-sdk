// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class DeleteProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isLogical, isLogical_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isLogical, isLogical_);
    };
    DeleteProjectRequest() = default ;
    DeleteProjectRequest(const DeleteProjectRequest &) = default ;
    DeleteProjectRequest(DeleteProjectRequest &&) = default ;
    DeleteProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProjectRequest() = default ;
    DeleteProjectRequest& operator=(const DeleteProjectRequest &) = default ;
    DeleteProjectRequest& operator=(DeleteProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isLogical_ == nullptr; };
    // isLogical Field Functions 
    bool hasIsLogical() const { return this->isLogical_ != nullptr;};
    void deleteIsLogical() { this->isLogical_ = nullptr;};
    inline bool isLogical() const { DARABONBA_PTR_GET_DEFAULT(isLogical_, false) };
    inline DeleteProjectRequest& setIsLogical(bool isLogical) { DARABONBA_PTR_SET_VALUE(isLogical_, isLogical) };


  protected:
    // Specifies whether to logically delete the project. Valid values: true and false. Default value: true. The value false indicates that the project is physically deleted.
    std::shared_ptr<bool> isLogical_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
