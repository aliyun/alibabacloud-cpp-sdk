// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEWHITELISTSRESPONSEBODYLISTWHITELISTRESULTWHITELISTS_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEWHITELISTSRESPONSEBODYLISTWHITELISTRESULTWHITELISTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(WhiteListCount, whiteListCount_);
      DARABONBA_PTR_TO_JSON(WhiteListName, whiteListName_);
      DARABONBA_PTR_TO_JSON(WhitelistType, whitelistType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(WhiteListCount, whiteListCount_);
      DARABONBA_PTR_FROM_JSON(WhiteListName, whiteListName_);
      DARABONBA_PTR_FROM_JSON(WhitelistType, whitelistType_);
    };
    ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists() = default ;
    ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists(const ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists &) = default ;
    ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists(ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists &&) = default ;
    ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists() = default ;
    ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& operator=(const ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists &) = default ;
    ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& operator=(ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->whiteListCount_ == nullptr && return this->whiteListName_ == nullptr
        && return this->whitelistType_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // whiteListCount Field Functions 
    bool hasWhiteListCount() const { return this->whiteListCount_ != nullptr;};
    void deleteWhiteListCount() { this->whiteListCount_ = nullptr;};
    inline int64_t whiteListCount() const { DARABONBA_PTR_GET_DEFAULT(whiteListCount_, 0L) };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& setWhiteListCount(int64_t whiteListCount) { DARABONBA_PTR_SET_VALUE(whiteListCount_, whiteListCount) };


    // whiteListName Field Functions 
    bool hasWhiteListName() const { return this->whiteListName_ != nullptr;};
    void deleteWhiteListName() { this->whiteListName_ = nullptr;};
    inline string whiteListName() const { DARABONBA_PTR_GET_DEFAULT(whiteListName_, "") };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& setWhiteListName(string whiteListName) { DARABONBA_PTR_SET_VALUE(whiteListName_, whiteListName) };


    // whitelistType Field Functions 
    bool hasWhitelistType() const { return this->whitelistType_ != nullptr;};
    void deleteWhitelistType() { this->whitelistType_ = nullptr;};
    inline string whitelistType() const { DARABONBA_PTR_GET_DEFAULT(whitelistType_, "") };
    inline ListMcubeWhitelistsResponseBodyListWhitelistResultWhitelists& setWhitelistType(string whitelistType) { DARABONBA_PTR_SET_VALUE(whitelistType_, whitelistType) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> whiteListCount_ = nullptr;
    std::shared_ptr<string> whiteListName_ = nullptr;
    std::shared_ptr<string> whitelistType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
