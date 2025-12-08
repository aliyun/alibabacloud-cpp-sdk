// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEIMAGESIZERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANGEIMAGESIZERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeImageSizeResponseBodyDataRetainLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ChangeImageSizeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeImageSizeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RetainLocation, retainLocation_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeImageSizeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RetainLocation, retainLocation_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ChangeImageSizeResponseBodyData() = default ;
    ChangeImageSizeResponseBodyData(const ChangeImageSizeResponseBodyData &) = default ;
    ChangeImageSizeResponseBodyData(ChangeImageSizeResponseBodyData &&) = default ;
    ChangeImageSizeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeImageSizeResponseBodyData() = default ;
    ChangeImageSizeResponseBodyData& operator=(const ChangeImageSizeResponseBodyData &) = default ;
    ChangeImageSizeResponseBodyData& operator=(ChangeImageSizeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->retainLocation_ == nullptr
        && return this->url_ == nullptr; };
    // retainLocation Field Functions 
    bool hasRetainLocation() const { return this->retainLocation_ != nullptr;};
    void deleteRetainLocation() { this->retainLocation_ = nullptr;};
    inline const Models::ChangeImageSizeResponseBodyDataRetainLocation & retainLocation() const { DARABONBA_PTR_GET_CONST(retainLocation_, Models::ChangeImageSizeResponseBodyDataRetainLocation) };
    inline Models::ChangeImageSizeResponseBodyDataRetainLocation retainLocation() { DARABONBA_PTR_GET(retainLocation_, Models::ChangeImageSizeResponseBodyDataRetainLocation) };
    inline ChangeImageSizeResponseBodyData& setRetainLocation(const Models::ChangeImageSizeResponseBodyDataRetainLocation & retainLocation) { DARABONBA_PTR_SET_VALUE(retainLocation_, retainLocation) };
    inline ChangeImageSizeResponseBodyData& setRetainLocation(Models::ChangeImageSizeResponseBodyDataRetainLocation && retainLocation) { DARABONBA_PTR_SET_RVALUE(retainLocation_, retainLocation) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ChangeImageSizeResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<Models::ChangeImageSizeResponseBodyDataRetainLocation> retainLocation_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
