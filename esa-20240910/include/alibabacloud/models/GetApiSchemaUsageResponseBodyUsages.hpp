// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPISCHEMAUSAGERESPONSEBODYUSAGES_HPP_
#define ALIBABACLOUD_MODELS_GETAPISCHEMAUSAGERESPONSEBODYUSAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetApiSchemaUsageResponseBodyUsages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiSchemaUsageResponseBodyUsages& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiSchemaUsageResponseBodyUsages& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    GetApiSchemaUsageResponseBodyUsages() = default ;
    GetApiSchemaUsageResponseBodyUsages(const GetApiSchemaUsageResponseBodyUsages &) = default ;
    GetApiSchemaUsageResponseBodyUsages(GetApiSchemaUsageResponseBodyUsages &&) = default ;
    GetApiSchemaUsageResponseBodyUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiSchemaUsageResponseBodyUsages() = default ;
    GetApiSchemaUsageResponseBodyUsages& operator=(const GetApiSchemaUsageResponseBodyUsages &) = default ;
    GetApiSchemaUsageResponseBodyUsages& operator=(GetApiSchemaUsageResponseBodyUsages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->usage_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetApiSchemaUsageResponseBodyUsages& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetApiSchemaUsageResponseBodyUsages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int32_t usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0) };
    inline GetApiSchemaUsageResponseBodyUsages& setUsage(int32_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The website ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The website name.
    std::shared_ptr<string> name_ = nullptr;
    // The number of files uploaded for the website.
    std::shared_ptr<int32_t> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
