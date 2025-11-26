// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHDFSUGIRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHDFSUGIRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHDFSUGIResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHDFSUGIResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHDFSUGIResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHDFSUGIResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListDoctorHDFSUGIResponseBodyData() = default ;
    ListDoctorHDFSUGIResponseBodyData(const ListDoctorHDFSUGIResponseBodyData &) = default ;
    ListDoctorHDFSUGIResponseBodyData(ListDoctorHDFSUGIResponseBodyData &&) = default ;
    ListDoctorHDFSUGIResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHDFSUGIResponseBodyData() = default ;
    ListDoctorHDFSUGIResponseBodyData& operator=(const ListDoctorHDFSUGIResponseBodyData &) = default ;
    ListDoctorHDFSUGIResponseBodyData& operator=(ListDoctorHDFSUGIResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metrics_ == nullptr
        && return this->name_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::ListDoctorHDFSUGIResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::ListDoctorHDFSUGIResponseBodyDataMetrics) };
    inline Models::ListDoctorHDFSUGIResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::ListDoctorHDFSUGIResponseBodyDataMetrics) };
    inline ListDoctorHDFSUGIResponseBodyData& setMetrics(const Models::ListDoctorHDFSUGIResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListDoctorHDFSUGIResponseBodyData& setMetrics(Models::ListDoctorHDFSUGIResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDoctorHDFSUGIResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The metric information.
    std::shared_ptr<Models::ListDoctorHDFSUGIResponseBodyDataMetrics> metrics_ = nullptr;
    // The actual name of the owner or group returned based on the value of Type.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
