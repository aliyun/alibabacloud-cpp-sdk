// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMTIMETYPELISTRESPONSEBODYTIMETYPE_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMTIMETYPELISTRESPONSEBODYTIMETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkitemTimeTypeListResponseBodyTimeType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkitemTimeTypeListResponseBodyTimeType& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(position, position_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkitemTimeTypeListResponseBodyTimeType& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(position, position_);
    };
    GetWorkitemTimeTypeListResponseBodyTimeType() = default ;
    GetWorkitemTimeTypeListResponseBodyTimeType(const GetWorkitemTimeTypeListResponseBodyTimeType &) = default ;
    GetWorkitemTimeTypeListResponseBodyTimeType(GetWorkitemTimeTypeListResponseBodyTimeType &&) = default ;
    GetWorkitemTimeTypeListResponseBodyTimeType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkitemTimeTypeListResponseBodyTimeType() = default ;
    GetWorkitemTimeTypeListResponseBodyTimeType& operator=(const GetWorkitemTimeTypeListResponseBodyTimeType &) = default ;
    GetWorkitemTimeTypeListResponseBodyTimeType& operator=(GetWorkitemTimeTypeListResponseBodyTimeType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->identifier_ == nullptr && return this->name_ == nullptr && return this->position_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetWorkitemTimeTypeListResponseBodyTimeType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetWorkitemTimeTypeListResponseBodyTimeType& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetWorkitemTimeTypeListResponseBodyTimeType& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkitemTimeTypeListResponseBodyTimeType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int64_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
    inline GetWorkitemTimeTypeListResponseBodyTimeType& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> position_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
