// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ILLUSTRATION_HPP_
#define ALIBABACLOUD_MODELS_ILLUSTRATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class Illustration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Illustration& obj) { 
      DARABONBA_PTR_TO_JSON(illustrationId, illustrationId_);
      DARABONBA_PTR_TO_JSON(oss, oss_);
    };
    friend void from_json(const Darabonba::Json& j, Illustration& obj) { 
      DARABONBA_PTR_FROM_JSON(illustrationId, illustrationId_);
      DARABONBA_PTR_FROM_JSON(oss, oss_);
    };
    Illustration() = default ;
    Illustration(const Illustration &) = default ;
    Illustration(Illustration &&) = default ;
    Illustration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Illustration() = default ;
    Illustration& operator=(const Illustration &) = default ;
    Illustration& operator=(Illustration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->illustrationId_ == nullptr
        && return this->oss_ == nullptr; };
    // illustrationId Field Functions 
    bool hasIllustrationId() const { return this->illustrationId_ != nullptr;};
    void deleteIllustrationId() { this->illustrationId_ = nullptr;};
    inline int64_t illustrationId() const { DARABONBA_PTR_GET_DEFAULT(illustrationId_, 0L) };
    inline Illustration& setIllustrationId(int64_t illustrationId) { DARABONBA_PTR_SET_VALUE(illustrationId_, illustrationId) };


    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline string oss() const { DARABONBA_PTR_GET_DEFAULT(oss_, "") };
    inline Illustration& setOss(string oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };


  protected:
    std::shared_ptr<int64_t> illustrationId_ = nullptr;
    std::shared_ptr<string> oss_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
