// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRESETSRESPONSEBODYPRESETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRESETSRESPONSEBODYPRESETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribePresetsResponseBodyPresets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePresetsResponseBodyPresets& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePresetsResponseBodyPresets& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribePresetsResponseBodyPresets() = default ;
    DescribePresetsResponseBodyPresets(const DescribePresetsResponseBodyPresets &) = default ;
    DescribePresetsResponseBodyPresets(DescribePresetsResponseBodyPresets &&) = default ;
    DescribePresetsResponseBodyPresets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePresetsResponseBodyPresets() = default ;
    DescribePresetsResponseBodyPresets& operator=(const DescribePresetsResponseBodyPresets &) = default ;
    DescribePresetsResponseBodyPresets& operator=(DescribePresetsResponseBodyPresets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribePresetsResponseBodyPresets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePresetsResponseBodyPresets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
