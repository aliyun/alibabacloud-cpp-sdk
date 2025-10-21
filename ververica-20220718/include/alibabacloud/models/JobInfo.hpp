// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBINFO_HPP_
#define ALIBABACLOUD_MODELS_JOBINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class JobInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobInfo& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_ANY_TO_JSON(properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, JobInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_ANY_FROM_JSON(properties, properties_);
    };
    JobInfo() = default ;
    JobInfo(const JobInfo &) = default ;
    JobInfo(JobInfo &&) = default ;
    JobInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobInfo() = default ;
    JobInfo& operator=(const JobInfo &) = default ;
    JobInfo& operator=(JobInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->properties_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline JobInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline JobInfo& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline JobInfo& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    Darabonba::Json properties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
