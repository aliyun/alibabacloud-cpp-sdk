// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETZOOKEEPERDATAIMPORTURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETZOOKEEPERDATAIMPORTURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetZookeeperDataImportUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetZookeeperDataImportUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetZookeeperDataImportUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetZookeeperDataImportUrlResponseBodyData() = default ;
    GetZookeeperDataImportUrlResponseBodyData(const GetZookeeperDataImportUrlResponseBodyData &) = default ;
    GetZookeeperDataImportUrlResponseBodyData(GetZookeeperDataImportUrlResponseBodyData &&) = default ;
    GetZookeeperDataImportUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetZookeeperDataImportUrlResponseBodyData() = default ;
    GetZookeeperDataImportUrlResponseBodyData& operator=(const GetZookeeperDataImportUrlResponseBodyData &) = default ;
    GetZookeeperDataImportUrlResponseBodyData& operator=(GetZookeeperDataImportUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxSize_ == nullptr
        && return this->url_ == nullptr; };
    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline string maxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, "") };
    inline GetZookeeperDataImportUrlResponseBodyData& setMaxSize(string maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetZookeeperDataImportUrlResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // code
    std::shared_ptr<string> maxSize_ = nullptr;
    // The maximum size of a file that can be uploaded each time. Unit: MB.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
