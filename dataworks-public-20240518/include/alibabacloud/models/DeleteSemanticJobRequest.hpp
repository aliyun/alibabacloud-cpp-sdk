// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESEMANTICJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESEMANTICJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteSemanticJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSemanticJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSemanticJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteSemanticJobRequest() = default ;
    DeleteSemanticJobRequest(const DeleteSemanticJobRequest &) = default ;
    DeleteSemanticJobRequest(DeleteSemanticJobRequest &&) = default ;
    DeleteSemanticJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSemanticJobRequest() = default ;
    DeleteSemanticJobRequest& operator=(const DeleteSemanticJobRequest &) = default ;
    DeleteSemanticJobRequest& operator=(DeleteSemanticJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteSemanticJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the job to delete. Use the Data.Name value from the CreateSemanticJob response or the Name value from a ListSemanticJobs list item.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
