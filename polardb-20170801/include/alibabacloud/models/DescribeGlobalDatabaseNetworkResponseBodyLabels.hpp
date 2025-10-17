// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODYLABELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODYLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDatabaseNetworkResponseBodyLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDatabaseNetworkResponseBodyLabels& obj) { 
      DARABONBA_PTR_TO_JSON(GDNVersion, GDNVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDatabaseNetworkResponseBodyLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(GDNVersion, GDNVersion_);
    };
    DescribeGlobalDatabaseNetworkResponseBodyLabels() = default ;
    DescribeGlobalDatabaseNetworkResponseBodyLabels(const DescribeGlobalDatabaseNetworkResponseBodyLabels &) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyLabels(DescribeGlobalDatabaseNetworkResponseBodyLabels &&) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDatabaseNetworkResponseBodyLabels() = default ;
    DescribeGlobalDatabaseNetworkResponseBodyLabels& operator=(const DescribeGlobalDatabaseNetworkResponseBodyLabels &) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyLabels& operator=(DescribeGlobalDatabaseNetworkResponseBodyLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->GDNVersion_ == nullptr; };
    // GDNVersion Field Functions 
    bool hasGDNVersion() const { return this->GDNVersion_ != nullptr;};
    void deleteGDNVersion() { this->GDNVersion_ = nullptr;};
    inline string GDNVersion() const { DARABONBA_PTR_GET_DEFAULT(GDNVersion_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyLabels& setGDNVersion(string GDNVersion) { DARABONBA_PTR_SET_VALUE(GDNVersion_, GDNVersion) };


  protected:
    std::shared_ptr<string> GDNVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
