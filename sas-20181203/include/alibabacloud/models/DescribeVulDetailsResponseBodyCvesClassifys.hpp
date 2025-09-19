// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULDETAILSRESPONSEBODYCVESCLASSIFYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULDETAILSRESPONSEBODYCVESCLASSIFYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulDetailsResponseBodyCvesClassifys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulDetailsResponseBodyCvesClassifys& obj) { 
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(DemoVideoUrl, demoVideoUrl_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulDetailsResponseBodyCvesClassifys& obj) { 
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(DemoVideoUrl, demoVideoUrl_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    DescribeVulDetailsResponseBodyCvesClassifys() = default ;
    DescribeVulDetailsResponseBodyCvesClassifys(const DescribeVulDetailsResponseBodyCvesClassifys &) = default ;
    DescribeVulDetailsResponseBodyCvesClassifys(DescribeVulDetailsResponseBodyCvesClassifys &&) = default ;
    DescribeVulDetailsResponseBodyCvesClassifys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulDetailsResponseBodyCvesClassifys() = default ;
    DescribeVulDetailsResponseBodyCvesClassifys& operator=(const DescribeVulDetailsResponseBodyCvesClassifys &) = default ;
    DescribeVulDetailsResponseBodyCvesClassifys& operator=(DescribeVulDetailsResponseBodyCvesClassifys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classify_ != nullptr
        && this->demoVideoUrl_ != nullptr && this->description_ != nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline DescribeVulDetailsResponseBodyCvesClassifys& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // demoVideoUrl Field Functions 
    bool hasDemoVideoUrl() const { return this->demoVideoUrl_ != nullptr;};
    void deleteDemoVideoUrl() { this->demoVideoUrl_ = nullptr;};
    inline string demoVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(demoVideoUrl_, "") };
    inline DescribeVulDetailsResponseBodyCvesClassifys& setDemoVideoUrl(string demoVideoUrl) { DARABONBA_PTR_SET_VALUE(demoVideoUrl_, demoVideoUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVulDetailsResponseBodyCvesClassifys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The type of the vulnerability.
    std::shared_ptr<string> classify_ = nullptr;
    // The URL of the demo video for the vulnerability.
    std::shared_ptr<string> demoVideoUrl_ = nullptr;
    // The description of the vulnerability type.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
