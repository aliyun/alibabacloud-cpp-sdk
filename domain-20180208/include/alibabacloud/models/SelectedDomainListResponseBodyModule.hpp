// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTEDDOMAINLISTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_SELECTEDDOMAINLISTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class SelectedDomainListResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectedDomainListResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SelectedDomainListResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
    };
    SelectedDomainListResponseBodyModule() = default ;
    SelectedDomainListResponseBodyModule(const SelectedDomainListResponseBodyModule &) = default ;
    SelectedDomainListResponseBodyModule(SelectedDomainListResponseBodyModule &&) = default ;
    SelectedDomainListResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectedDomainListResponseBodyModule() = default ;
    SelectedDomainListResponseBodyModule& operator=(const SelectedDomainListResponseBodyModule &) = default ;
    SelectedDomainListResponseBodyModule& operator=(SelectedDomainListResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline SelectedDomainListResponseBodyModule& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


  protected:
    std::shared_ptr<string> downloadUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
