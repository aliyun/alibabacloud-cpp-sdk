// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHDFSDIRECTORIESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHDFSDIRECTORIESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHDFSDirectoriesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHDFSDirectoriesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Depth, depth_);
      DARABONBA_PTR_TO_JSON(DirPath, dirPath_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHDFSDirectoriesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Depth, depth_);
      DARABONBA_PTR_FROM_JSON(DirPath, dirPath_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListDoctorHDFSDirectoriesResponseBodyData() = default ;
    ListDoctorHDFSDirectoriesResponseBodyData(const ListDoctorHDFSDirectoriesResponseBodyData &) = default ;
    ListDoctorHDFSDirectoriesResponseBodyData(ListDoctorHDFSDirectoriesResponseBodyData &&) = default ;
    ListDoctorHDFSDirectoriesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHDFSDirectoriesResponseBodyData() = default ;
    ListDoctorHDFSDirectoriesResponseBodyData& operator=(const ListDoctorHDFSDirectoriesResponseBodyData &) = default ;
    ListDoctorHDFSDirectoriesResponseBodyData& operator=(ListDoctorHDFSDirectoriesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->depth_ == nullptr
        && return this->dirPath_ == nullptr && return this->group_ == nullptr && return this->metrics_ == nullptr && return this->user_ == nullptr; };
    // depth Field Functions 
    bool hasDepth() const { return this->depth_ != nullptr;};
    void deleteDepth() { this->depth_ = nullptr;};
    inline int32_t depth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
    inline ListDoctorHDFSDirectoriesResponseBodyData& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


    // dirPath Field Functions 
    bool hasDirPath() const { return this->dirPath_ != nullptr;};
    void deleteDirPath() { this->dirPath_ = nullptr;};
    inline string dirPath() const { DARABONBA_PTR_GET_DEFAULT(dirPath_, "") };
    inline ListDoctorHDFSDirectoriesResponseBodyData& setDirPath(string dirPath) { DARABONBA_PTR_SET_VALUE(dirPath_, dirPath) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListDoctorHDFSDirectoriesResponseBodyData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetrics) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetrics) };
    inline ListDoctorHDFSDirectoriesResponseBodyData& setMetrics(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListDoctorHDFSDirectoriesResponseBodyData& setMetrics(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ListDoctorHDFSDirectoriesResponseBodyData& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    std::shared_ptr<int32_t> depth_ = nullptr;
    std::shared_ptr<string> dirPath_ = nullptr;
    std::shared_ptr<string> group_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetrics> metrics_ = nullptr;
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
