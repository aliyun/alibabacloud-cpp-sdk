// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMFILERESPONSEBODYWORKITEMFILE_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMFILERESPONSEBODYWORKITEMFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkitemFileResponseBodyWorkitemFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkitemFileResponseBodyWorkitemFile& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(suffix, suffix_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkitemFileResponseBodyWorkitemFile& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(suffix, suffix_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    GetWorkitemFileResponseBodyWorkitemFile() = default ;
    GetWorkitemFileResponseBodyWorkitemFile(const GetWorkitemFileResponseBodyWorkitemFile &) = default ;
    GetWorkitemFileResponseBodyWorkitemFile(GetWorkitemFileResponseBodyWorkitemFile &&) = default ;
    GetWorkitemFileResponseBodyWorkitemFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkitemFileResponseBodyWorkitemFile() = default ;
    GetWorkitemFileResponseBodyWorkitemFile& operator=(const GetWorkitemFileResponseBodyWorkitemFile &) = default ;
    GetWorkitemFileResponseBodyWorkitemFile& operator=(GetWorkitemFileResponseBodyWorkitemFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->size_ == nullptr && return this->suffix_ == nullptr && return this->url_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetWorkitemFileResponseBodyWorkitemFile& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkitemFileResponseBodyWorkitemFile& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetWorkitemFileResponseBodyWorkitemFile& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // suffix Field Functions 
    bool hasSuffix() const { return this->suffix_ != nullptr;};
    void deleteSuffix() { this->suffix_ = nullptr;};
    inline string suffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
    inline GetWorkitemFileResponseBodyWorkitemFile& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetWorkitemFileResponseBodyWorkitemFile& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> suffix_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
