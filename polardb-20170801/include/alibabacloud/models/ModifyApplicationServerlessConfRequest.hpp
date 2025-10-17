// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSERVERLESSCONFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSERVERLESSCONFREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyApplicationServerlessConfRequestServerlessConfList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationServerlessConfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationServerlessConfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ServerlessConfList, serverlessConfList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationServerlessConfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfList, serverlessConfList_);
    };
    ModifyApplicationServerlessConfRequest() = default ;
    ModifyApplicationServerlessConfRequest(const ModifyApplicationServerlessConfRequest &) = default ;
    ModifyApplicationServerlessConfRequest(ModifyApplicationServerlessConfRequest &&) = default ;
    ModifyApplicationServerlessConfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationServerlessConfRequest() = default ;
    ModifyApplicationServerlessConfRequest& operator=(const ModifyApplicationServerlessConfRequest &) = default ;
    ModifyApplicationServerlessConfRequest& operator=(ModifyApplicationServerlessConfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->serverlessConfList_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationServerlessConfRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // serverlessConfList Field Functions 
    bool hasServerlessConfList() const { return this->serverlessConfList_ != nullptr;};
    void deleteServerlessConfList() { this->serverlessConfList_ = nullptr;};
    inline const vector<ModifyApplicationServerlessConfRequestServerlessConfList> & serverlessConfList() const { DARABONBA_PTR_GET_CONST(serverlessConfList_, vector<ModifyApplicationServerlessConfRequestServerlessConfList>) };
    inline vector<ModifyApplicationServerlessConfRequestServerlessConfList> serverlessConfList() { DARABONBA_PTR_GET(serverlessConfList_, vector<ModifyApplicationServerlessConfRequestServerlessConfList>) };
    inline ModifyApplicationServerlessConfRequest& setServerlessConfList(const vector<ModifyApplicationServerlessConfRequestServerlessConfList> & serverlessConfList) { DARABONBA_PTR_SET_VALUE(serverlessConfList_, serverlessConfList) };
    inline ModifyApplicationServerlessConfRequest& setServerlessConfList(vector<ModifyApplicationServerlessConfRequestServerlessConfList> && serverlessConfList) { DARABONBA_PTR_SET_RVALUE(serverlessConfList_, serverlessConfList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<ModifyApplicationServerlessConfRequestServerlessConfList>> serverlessConfList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
