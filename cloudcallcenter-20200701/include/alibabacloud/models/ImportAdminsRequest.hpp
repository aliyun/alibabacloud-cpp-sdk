// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTADMINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTADMINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class ImportAdminsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportAdminsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RamIdList, ramIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ImportAdminsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RamIdList, ramIdList_);
    };
    ImportAdminsRequest() = default ;
    ImportAdminsRequest(const ImportAdminsRequest &) = default ;
    ImportAdminsRequest(ImportAdminsRequest &&) = default ;
    ImportAdminsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportAdminsRequest() = default ;
    ImportAdminsRequest& operator=(const ImportAdminsRequest &) = default ;
    ImportAdminsRequest& operator=(ImportAdminsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ramIdList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ImportAdminsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ramIdList Field Functions 
    bool hasRamIdList() const { return this->ramIdList_ != nullptr;};
    void deleteRamIdList() { this->ramIdList_ = nullptr;};
    inline string getRamIdList() const { DARABONBA_PTR_GET_DEFAULT(ramIdList_, "") };
    inline ImportAdminsRequest& setRamIdList(string ramIdList) { DARABONBA_PTR_SET_VALUE(ramIdList_, ramIdList) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> ramIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
