// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONPROVISIONINFOSRESPONSEBODYAPPLICATIONPROVISIONINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONPROVISIONINFOSRESPONSEBODYAPPLICATIONPROVISIONINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationProvisionInfo, applicationProvisionInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationProvisionInfo, applicationProvisionInfo_);
    };
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos() = default ;
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos(const ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos &) = default ;
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos(ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos &&) = default ;
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos() = default ;
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos& operator=(const ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos &) = default ;
    ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos& operator=(ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationProvisionInfo_ != nullptr; };
    // applicationProvisionInfo Field Functions 
    bool hasApplicationProvisionInfo() const { return this->applicationProvisionInfo_ != nullptr;};
    void deleteApplicationProvisionInfo() { this->applicationProvisionInfo_ = nullptr;};
    inline const vector<Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfo> & applicationProvisionInfo() const { DARABONBA_PTR_GET_CONST(applicationProvisionInfo_, vector<Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfo>) };
    inline vector<Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfo> applicationProvisionInfo() { DARABONBA_PTR_GET(applicationProvisionInfo_, vector<Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfo>) };
    inline ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos& setApplicationProvisionInfo(const vector<Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfo> & applicationProvisionInfo) { DARABONBA_PTR_SET_VALUE(applicationProvisionInfo_, applicationProvisionInfo) };
    inline ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos& setApplicationProvisionInfo(vector<Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfo> && applicationProvisionInfo) { DARABONBA_PTR_SET_RVALUE(applicationProvisionInfo_, applicationProvisionInfo) };


  protected:
    std::shared_ptr<vector<Models::ListApplicationProvisionInfosResponseBodyApplicationProvisionInfosApplicationProvisionInfo>> applicationProvisionInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
