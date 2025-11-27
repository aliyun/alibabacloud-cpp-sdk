// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREIMAGEFACESREQUESTSOURCE_HPP_
#define ALIBABACLOUD_MODELS_COMPAREIMAGEFACESREQUESTSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CompareImageFacesRequestSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareImageFacesRequestSource& obj) { 
      DARABONBA_PTR_TO_JSON(URI1, URI1_);
      DARABONBA_PTR_TO_JSON(URI2, URI2_);
    };
    friend void from_json(const Darabonba::Json& j, CompareImageFacesRequestSource& obj) { 
      DARABONBA_PTR_FROM_JSON(URI1, URI1_);
      DARABONBA_PTR_FROM_JSON(URI2, URI2_);
    };
    CompareImageFacesRequestSource() = default ;
    CompareImageFacesRequestSource(const CompareImageFacesRequestSource &) = default ;
    CompareImageFacesRequestSource(CompareImageFacesRequestSource &&) = default ;
    CompareImageFacesRequestSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareImageFacesRequestSource() = default ;
    CompareImageFacesRequestSource& operator=(const CompareImageFacesRequestSource &) = default ;
    CompareImageFacesRequestSource& operator=(CompareImageFacesRequestSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->URI1_ == nullptr
        && return this->URI2_ == nullptr; };
    // URI1 Field Functions 
    bool hasURI1() const { return this->URI1_ != nullptr;};
    void deleteURI1() { this->URI1_ = nullptr;};
    inline string URI1() const { DARABONBA_PTR_GET_DEFAULT(URI1_, "") };
    inline CompareImageFacesRequestSource& setURI1(string URI1) { DARABONBA_PTR_SET_VALUE(URI1_, URI1) };


    // URI2 Field Functions 
    bool hasURI2() const { return this->URI2_ != nullptr;};
    void deleteURI2() { this->URI2_ = nullptr;};
    inline string URI2() const { DARABONBA_PTR_GET_DEFAULT(URI2_, "") };
    inline CompareImageFacesRequestSource& setURI2(string URI2) { DARABONBA_PTR_SET_VALUE(URI2_, URI2) };


  protected:
    // The OSS URL of the image file.
    // 
    // Specify the URL in the `oss://<bucket>/<object>` format. `<bucket>` specifies the name of the OSS bucket that is in the same region as the current project. `<object>` specifies path of the object with the extension included.
    std::shared_ptr<string> URI1_ = nullptr;
    // The OSS URL of the image file.
    // 
    // Specify the URL in the `oss://<bucket>/<object>` format. `<bucket>` specifies the name of the OSS bucket that is in the same region as the current project, and `<object>` specifies the path of the object with the extension included.
    std::shared_ptr<string> URI2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
