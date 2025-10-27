// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWVERSIONSRESPONSEBODYFLOWVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWVERSIONSRESPONSEBODYFLOWVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowVersionsResponseBodyFlowVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowVersionsResponseBodyFlowVersions& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowVersionsResponseBodyFlowVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListFlowVersionsResponseBodyFlowVersions() = default ;
    ListFlowVersionsResponseBodyFlowVersions(const ListFlowVersionsResponseBodyFlowVersions &) = default ;
    ListFlowVersionsResponseBodyFlowVersions(ListFlowVersionsResponseBodyFlowVersions &&) = default ;
    ListFlowVersionsResponseBodyFlowVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowVersionsResponseBodyFlowVersions() = default ;
    ListFlowVersionsResponseBodyFlowVersions& operator=(const ListFlowVersionsResponseBodyFlowVersions &) = default ;
    ListFlowVersionsResponseBodyFlowVersions& operator=(ListFlowVersionsResponseBodyFlowVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->description_ == nullptr && return this->version_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListFlowVersionsResponseBodyFlowVersions& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFlowVersionsResponseBodyFlowVersions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListFlowVersionsResponseBodyFlowVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
