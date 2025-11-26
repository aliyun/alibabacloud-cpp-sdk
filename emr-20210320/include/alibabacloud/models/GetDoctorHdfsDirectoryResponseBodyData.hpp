// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHDFSDIRECTORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHDFSDIRECTORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHDFSDirectoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHDFSDirectoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Depth, depth_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHDFSDirectoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Depth, depth_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetDoctorHDFSDirectoryResponseBodyData() = default ;
    GetDoctorHDFSDirectoryResponseBodyData(const GetDoctorHDFSDirectoryResponseBodyData &) = default ;
    GetDoctorHDFSDirectoryResponseBodyData(GetDoctorHDFSDirectoryResponseBodyData &&) = default ;
    GetDoctorHDFSDirectoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHDFSDirectoryResponseBodyData() = default ;
    GetDoctorHDFSDirectoryResponseBodyData& operator=(const GetDoctorHDFSDirectoryResponseBodyData &) = default ;
    GetDoctorHDFSDirectoryResponseBodyData& operator=(GetDoctorHDFSDirectoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->depth_ == nullptr
        && return this->group_ == nullptr && return this->metrics_ == nullptr && return this->user_ == nullptr; };
    // depth Field Functions 
    bool hasDepth() const { return this->depth_ != nullptr;};
    void deleteDepth() { this->depth_ = nullptr;};
    inline int32_t depth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
    inline GetDoctorHDFSDirectoryResponseBodyData& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetDoctorHDFSDirectoryResponseBodyData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetrics) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetrics) };
    inline GetDoctorHDFSDirectoryResponseBodyData& setMetrics(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorHDFSDirectoryResponseBodyData& setMetrics(Models::GetDoctorHDFSDirectoryResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetDoctorHDFSDirectoryResponseBodyData& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The directory level.
    std::shared_ptr<int32_t> depth_ = nullptr;
    // The group to which the directory belongs.
    std::shared_ptr<string> group_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetrics> metrics_ = nullptr;
    // The directory owner.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
