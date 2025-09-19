// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPACLUSTERLABELLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOPACLUSTERLABELLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaClusterLabelListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaClusterLabelListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaClusterLabelListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    GetOpaClusterLabelListResponseBodyData() = default ;
    GetOpaClusterLabelListResponseBodyData(const GetOpaClusterLabelListResponseBodyData &) = default ;
    GetOpaClusterLabelListResponseBodyData(GetOpaClusterLabelListResponseBodyData &&) = default ;
    GetOpaClusterLabelListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaClusterLabelListResponseBodyData() = default ;
    GetOpaClusterLabelListResponseBodyData& operator=(const GetOpaClusterLabelListResponseBodyData &) = default ;
    GetOpaClusterLabelListResponseBodyData& operator=(GetOpaClusterLabelListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagName_ != nullptr; };
    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline GetOpaClusterLabelListResponseBodyData& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // The name of the tag that is added to the container.
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
