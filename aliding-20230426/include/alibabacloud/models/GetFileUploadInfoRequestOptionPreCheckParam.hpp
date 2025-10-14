// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEUPLOADINFOREQUESTOPTIONPRECHECKPARAM_HPP_
#define ALIBABACLOUD_MODELS_GETFILEUPLOADINFOREQUESTOPTIONPRECHECKPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFileUploadInfoRequestOptionPreCheckParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileUploadInfoRequestOptionPreCheckParam& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileUploadInfoRequestOptionPreCheckParam& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    GetFileUploadInfoRequestOptionPreCheckParam() = default ;
    GetFileUploadInfoRequestOptionPreCheckParam(const GetFileUploadInfoRequestOptionPreCheckParam &) = default ;
    GetFileUploadInfoRequestOptionPreCheckParam(GetFileUploadInfoRequestOptionPreCheckParam &&) = default ;
    GetFileUploadInfoRequestOptionPreCheckParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileUploadInfoRequestOptionPreCheckParam() = default ;
    GetFileUploadInfoRequestOptionPreCheckParam& operator=(const GetFileUploadInfoRequestOptionPreCheckParam &) = default ;
    GetFileUploadInfoRequestOptionPreCheckParam& operator=(GetFileUploadInfoRequestOptionPreCheckParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->size_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFileUploadInfoRequestOptionPreCheckParam& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetFileUploadInfoRequestOptionPreCheckParam& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
