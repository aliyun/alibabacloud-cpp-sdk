// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERADDONMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERADDONMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterAddonMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAddonMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAddonMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeClusterAddonMetadataRequest() = default ;
    DescribeClusterAddonMetadataRequest(const DescribeClusterAddonMetadataRequest &) = default ;
    DescribeClusterAddonMetadataRequest(DescribeClusterAddonMetadataRequest &&) = default ;
    DescribeClusterAddonMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAddonMetadataRequest() = default ;
    DescribeClusterAddonMetadataRequest& operator=(const DescribeClusterAddonMetadataRequest &) = default ;
    DescribeClusterAddonMetadataRequest& operator=(DescribeClusterAddonMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeClusterAddonMetadataRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
