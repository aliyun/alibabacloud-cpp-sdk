// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUMODELCOMMONSCHEMAREFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUMODELCOMMONSCHEMAREFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteUmodelCommonSchemaRefRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUmodelCommonSchemaRefRequest& obj) { 
      DARABONBA_PTR_TO_JSON(group, group_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUmodelCommonSchemaRefRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(group, group_);
    };
    DeleteUmodelCommonSchemaRefRequest() = default ;
    DeleteUmodelCommonSchemaRefRequest(const DeleteUmodelCommonSchemaRefRequest &) = default ;
    DeleteUmodelCommonSchemaRefRequest(DeleteUmodelCommonSchemaRefRequest &&) = default ;
    DeleteUmodelCommonSchemaRefRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUmodelCommonSchemaRefRequest() = default ;
    DeleteUmodelCommonSchemaRefRequest& operator=(const DeleteUmodelCommonSchemaRefRequest &) = default ;
    DeleteUmodelCommonSchemaRefRequest& operator=(DeleteUmodelCommonSchemaRefRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->group_ == nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline DeleteUmodelCommonSchemaRefRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> group_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
