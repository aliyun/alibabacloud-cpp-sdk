// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEMINIAPPSRESPONSEBODYLISTMINIRESULTMINIPROGRAMLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEMINIAPPSRESPONSEBODYLISTMINIRESULTMINIPROGRAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
      DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
      DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
    };
    ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList() = default ;
    ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList(const ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList &) = default ;
    ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList(ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList &&) = default ;
    ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList() = default ;
    ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList& operator=(const ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList &) = default ;
    ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList& operator=(ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCode_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->h5Id_ != nullptr && this->h5Name_ != nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // h5Id Field Functions 
    bool hasH5Id() const { return this->h5Id_ != nullptr;};
    void deleteH5Id() { this->h5Id_ = nullptr;};
    inline string h5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
    inline ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


    // h5Name Field Functions 
    bool hasH5Name() const { return this->h5Name_ != nullptr;};
    void deleteH5Name() { this->h5Name_ = nullptr;};
    inline string h5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
    inline ListMcubeMiniAppsResponseBodyListMiniResultMiniProgramList& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> h5Id_ = nullptr;
    std::shared_ptr<string> h5Name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
