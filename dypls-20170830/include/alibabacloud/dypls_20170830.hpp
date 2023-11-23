// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYPLS20170830_H_
#define ALIBABACLOUD_DYPLS20170830_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dypls20170830 {
class ApplyArInvoiceWithSourceRequestAddressCustomer : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerSite{};
  shared_ptr<string> customerSystem{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> language{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  ApplyArInvoiceWithSourceRequestAddressCustomer() {}

  explicit ApplyArInvoiceWithSourceRequestAddressCustomer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (customerSite) {
      res["CustomerSite"] = boost::any(*customerSite);
    }
    if (customerSystem) {
      res["CustomerSystem"] = boost::any(*customerSystem);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("CustomerSite") != m.end() && !m["CustomerSite"].empty()) {
      customerSite = make_shared<string>(boost::any_cast<string>(m["CustomerSite"]));
    }
    if (m.find("CustomerSystem") != m.end() && !m["CustomerSystem"].empty()) {
      customerSystem = make_shared<string>(boost::any_cast<string>(m["CustomerSystem"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ApplyArInvoiceWithSourceRequestAddressCustomer() = default;
};
class ApplyArInvoiceWithSourceRequestAddress : public Darabonba::Model {
public:
  shared_ptr<string> addressId{};
  shared_ptr<string> appCode{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> creator{};
  shared_ptr<ApplyArInvoiceWithSourceRequestAddressCustomer> customer{};
  shared_ptr<string> detailedAddress{};
  shared_ptr<string> district{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> fixedNumber{};
  shared_ptr<string> fullAddress{};
  shared_ptr<bool> isDefault{};
  shared_ptr<bool> isEffective{};
  shared_ptr<string> language{};
  shared_ptr<string> mobileNumber{};
  shared_ptr<string> province{};
  shared_ptr<string> recipientName{};
  shared_ptr<string> relatedId{};
  shared_ptr<string> relatedSystem{};
  shared_ptr<string> sign{};
  shared_ptr<string> street{};
  shared_ptr<string> uuid{};
  shared_ptr<string> zipCode{};

  ApplyArInvoiceWithSourceRequestAddress() {}

  explicit ApplyArInvoiceWithSourceRequestAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressId) {
      res["AddressId"] = boost::any(*addressId);
    }
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (customer) {
      res["Customer"] = customer ? boost::any(customer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detailedAddress) {
      res["DetailedAddress"] = boost::any(*detailedAddress);
    }
    if (district) {
      res["District"] = boost::any(*district);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (fixedNumber) {
      res["FixedNumber"] = boost::any(*fixedNumber);
    }
    if (fullAddress) {
      res["FullAddress"] = boost::any(*fullAddress);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (isEffective) {
      res["IsEffective"] = boost::any(*isEffective);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (mobileNumber) {
      res["MobileNumber"] = boost::any(*mobileNumber);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (recipientName) {
      res["RecipientName"] = boost::any(*recipientName);
    }
    if (relatedId) {
      res["RelatedId"] = boost::any(*relatedId);
    }
    if (relatedSystem) {
      res["RelatedSystem"] = boost::any(*relatedSystem);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (street) {
      res["Street"] = boost::any(*street);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    if (zipCode) {
      res["ZipCode"] = boost::any(*zipCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressId") != m.end() && !m["AddressId"].empty()) {
      addressId = make_shared<string>(boost::any_cast<string>(m["AddressId"]));
    }
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Customer") != m.end() && !m["Customer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Customer"].type()) {
        ApplyArInvoiceWithSourceRequestAddressCustomer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Customer"]));
        customer = make_shared<ApplyArInvoiceWithSourceRequestAddressCustomer>(model1);
      }
    }
    if (m.find("DetailedAddress") != m.end() && !m["DetailedAddress"].empty()) {
      detailedAddress = make_shared<string>(boost::any_cast<string>(m["DetailedAddress"]));
    }
    if (m.find("District") != m.end() && !m["District"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["District"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("FixedNumber") != m.end() && !m["FixedNumber"].empty()) {
      fixedNumber = make_shared<string>(boost::any_cast<string>(m["FixedNumber"]));
    }
    if (m.find("FullAddress") != m.end() && !m["FullAddress"].empty()) {
      fullAddress = make_shared<string>(boost::any_cast<string>(m["FullAddress"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("IsEffective") != m.end() && !m["IsEffective"].empty()) {
      isEffective = make_shared<bool>(boost::any_cast<bool>(m["IsEffective"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MobileNumber") != m.end() && !m["MobileNumber"].empty()) {
      mobileNumber = make_shared<string>(boost::any_cast<string>(m["MobileNumber"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RecipientName") != m.end() && !m["RecipientName"].empty()) {
      recipientName = make_shared<string>(boost::any_cast<string>(m["RecipientName"]));
    }
    if (m.find("RelatedId") != m.end() && !m["RelatedId"].empty()) {
      relatedId = make_shared<string>(boost::any_cast<string>(m["RelatedId"]));
    }
    if (m.find("RelatedSystem") != m.end() && !m["RelatedSystem"].empty()) {
      relatedSystem = make_shared<string>(boost::any_cast<string>(m["RelatedSystem"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Street") != m.end() && !m["Street"].empty()) {
      street = make_shared<string>(boost::any_cast<string>(m["Street"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
    if (m.find("ZipCode") != m.end() && !m["ZipCode"].empty()) {
      zipCode = make_shared<string>(boost::any_cast<string>(m["ZipCode"]));
    }
  }


  virtual ~ApplyArInvoiceWithSourceRequestAddress() = default;
};
class ApplyArInvoiceWithSourceRequestCustomer : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerSite{};
  shared_ptr<string> customerSystem{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> language{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  ApplyArInvoiceWithSourceRequestCustomer() {}

  explicit ApplyArInvoiceWithSourceRequestCustomer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (customerSite) {
      res["CustomerSite"] = boost::any(*customerSite);
    }
    if (customerSystem) {
      res["CustomerSystem"] = boost::any(*customerSystem);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("CustomerSite") != m.end() && !m["CustomerSite"].empty()) {
      customerSite = make_shared<string>(boost::any_cast<string>(m["CustomerSite"]));
    }
    if (m.find("CustomerSystem") != m.end() && !m["CustomerSystem"].empty()) {
      customerSystem = make_shared<string>(boost::any_cast<string>(m["CustomerSystem"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ApplyArInvoiceWithSourceRequestCustomer() = default;
};
class ApplyArInvoiceWithSourceRequestSourceListCustomer : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerSite{};
  shared_ptr<string> customerSystem{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> language{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  ApplyArInvoiceWithSourceRequestSourceListCustomer() {}

  explicit ApplyArInvoiceWithSourceRequestSourceListCustomer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (customerSite) {
      res["CustomerSite"] = boost::any(*customerSite);
    }
    if (customerSystem) {
      res["CustomerSystem"] = boost::any(*customerSystem);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("CustomerSite") != m.end() && !m["CustomerSite"].empty()) {
      customerSite = make_shared<string>(boost::any_cast<string>(m["CustomerSite"]));
    }
    if (m.find("CustomerSystem") != m.end() && !m["CustomerSystem"].empty()) {
      customerSystem = make_shared<string>(boost::any_cast<string>(m["CustomerSystem"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ApplyArInvoiceWithSourceRequestSourceListCustomer() = default;
};
class ApplyArInvoiceWithSourceRequestSourceList : public Darabonba::Model {
public:
  shared_ptr<double> amount{};
  shared_ptr<string> appCode{};
  shared_ptr<double> billAmount{};
  shared_ptr<string> billDomain{};
  shared_ptr<string> billNo{};
  shared_ptr<string> billType{};
  shared_ptr<long> blueSourceId{};
  shared_ptr<bool> canMerge{};
  shared_ptr<string> cargoName{};
  shared_ptr<string> category{};
  shared_ptr<string> companyName{};
  shared_ptr<string> currencyCode{};
  shared_ptr<ApplyArInvoiceWithSourceRequestSourceListCustomer> customer{};
  shared_ptr<double> discountAmount{};
  shared_ptr<double> discountTaxAmount{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<double> excludingTaxAmount{};
  shared_ptr<double> excludingTaxDiscountAmount{};
  shared_ptr<double> excludingTaxRedAmount{};
  shared_ptr<double> excludingTaxRemainAmount{};
  shared_ptr<string> gmtBill{};
  shared_ptr<string> gmtBillEnd{};
  shared_ptr<string> gmtBillStart{};
  shared_ptr<string> gmtBuild{};
  shared_ptr<string> isApply{};
  shared_ptr<string> language{};
  shared_ptr<string> majorBillNo{};
  shared_ptr<string> model{};
  shared_ptr<string> ouCode{};
  shared_ptr<string> parentCategory{};
  shared_ptr<string> productDomain{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<double> quantity{};
  shared_ptr<string> quantityUnit{};
  shared_ptr<double> redAmount{};
  shared_ptr<string> relatedId{};
  shared_ptr<double> remainAmount{};
  shared_ptr<string> revenueType{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> sign{};
  shared_ptr<string> siteId{};
  shared_ptr<long> sourceId{};
  shared_ptr<double> taxAmount{};
  shared_ptr<double> taxRate{};
  shared_ptr<double> unitPrice{};
  shared_ptr<string> uuid{};

  ApplyArInvoiceWithSourceRequestSourceList() {}

  explicit ApplyArInvoiceWithSourceRequestSourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (billAmount) {
      res["BillAmount"] = boost::any(*billAmount);
    }
    if (billDomain) {
      res["BillDomain"] = boost::any(*billDomain);
    }
    if (billNo) {
      res["BillNo"] = boost::any(*billNo);
    }
    if (billType) {
      res["BillType"] = boost::any(*billType);
    }
    if (blueSourceId) {
      res["BlueSourceId"] = boost::any(*blueSourceId);
    }
    if (canMerge) {
      res["CanMerge"] = boost::any(*canMerge);
    }
    if (cargoName) {
      res["CargoName"] = boost::any(*cargoName);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (currencyCode) {
      res["CurrencyCode"] = boost::any(*currencyCode);
    }
    if (customer) {
      res["Customer"] = customer ? boost::any(customer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (discountTaxAmount) {
      res["DiscountTaxAmount"] = boost::any(*discountTaxAmount);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (excludingTaxAmount) {
      res["ExcludingTaxAmount"] = boost::any(*excludingTaxAmount);
    }
    if (excludingTaxDiscountAmount) {
      res["ExcludingTaxDiscountAmount"] = boost::any(*excludingTaxDiscountAmount);
    }
    if (excludingTaxRedAmount) {
      res["ExcludingTaxRedAmount"] = boost::any(*excludingTaxRedAmount);
    }
    if (excludingTaxRemainAmount) {
      res["ExcludingTaxRemainAmount"] = boost::any(*excludingTaxRemainAmount);
    }
    if (gmtBill) {
      res["GmtBill"] = boost::any(*gmtBill);
    }
    if (gmtBillEnd) {
      res["GmtBillEnd"] = boost::any(*gmtBillEnd);
    }
    if (gmtBillStart) {
      res["GmtBillStart"] = boost::any(*gmtBillStart);
    }
    if (gmtBuild) {
      res["GmtBuild"] = boost::any(*gmtBuild);
    }
    if (isApply) {
      res["IsApply"] = boost::any(*isApply);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (majorBillNo) {
      res["MajorBillNo"] = boost::any(*majorBillNo);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (ouCode) {
      res["OuCode"] = boost::any(*ouCode);
    }
    if (parentCategory) {
      res["ParentCategory"] = boost::any(*parentCategory);
    }
    if (productDomain) {
      res["ProductDomain"] = boost::any(*productDomain);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (quantityUnit) {
      res["QuantityUnit"] = boost::any(*quantityUnit);
    }
    if (redAmount) {
      res["RedAmount"] = boost::any(*redAmount);
    }
    if (relatedId) {
      res["RelatedId"] = boost::any(*relatedId);
    }
    if (remainAmount) {
      res["RemainAmount"] = boost::any(*remainAmount);
    }
    if (revenueType) {
      res["RevenueType"] = boost::any(*revenueType);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (siteId) {
      res["SiteId"] = boost::any(*siteId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (taxAmount) {
      res["TaxAmount"] = boost::any(*taxAmount);
    }
    if (taxRate) {
      res["TaxRate"] = boost::any(*taxRate);
    }
    if (unitPrice) {
      res["UnitPrice"] = boost::any(*unitPrice);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("BillAmount") != m.end() && !m["BillAmount"].empty()) {
      billAmount = make_shared<double>(boost::any_cast<double>(m["BillAmount"]));
    }
    if (m.find("BillDomain") != m.end() && !m["BillDomain"].empty()) {
      billDomain = make_shared<string>(boost::any_cast<string>(m["BillDomain"]));
    }
    if (m.find("BillNo") != m.end() && !m["BillNo"].empty()) {
      billNo = make_shared<string>(boost::any_cast<string>(m["BillNo"]));
    }
    if (m.find("BillType") != m.end() && !m["BillType"].empty()) {
      billType = make_shared<string>(boost::any_cast<string>(m["BillType"]));
    }
    if (m.find("BlueSourceId") != m.end() && !m["BlueSourceId"].empty()) {
      blueSourceId = make_shared<long>(boost::any_cast<long>(m["BlueSourceId"]));
    }
    if (m.find("CanMerge") != m.end() && !m["CanMerge"].empty()) {
      canMerge = make_shared<bool>(boost::any_cast<bool>(m["CanMerge"]));
    }
    if (m.find("CargoName") != m.end() && !m["CargoName"].empty()) {
      cargoName = make_shared<string>(boost::any_cast<string>(m["CargoName"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("CurrencyCode") != m.end() && !m["CurrencyCode"].empty()) {
      currencyCode = make_shared<string>(boost::any_cast<string>(m["CurrencyCode"]));
    }
    if (m.find("Customer") != m.end() && !m["Customer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Customer"].type()) {
        ApplyArInvoiceWithSourceRequestSourceListCustomer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Customer"]));
        customer = make_shared<ApplyArInvoiceWithSourceRequestSourceListCustomer>(model1);
      }
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("DiscountTaxAmount") != m.end() && !m["DiscountTaxAmount"].empty()) {
      discountTaxAmount = make_shared<double>(boost::any_cast<double>(m["DiscountTaxAmount"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ExcludingTaxAmount") != m.end() && !m["ExcludingTaxAmount"].empty()) {
      excludingTaxAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxAmount"]));
    }
    if (m.find("ExcludingTaxDiscountAmount") != m.end() && !m["ExcludingTaxDiscountAmount"].empty()) {
      excludingTaxDiscountAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxDiscountAmount"]));
    }
    if (m.find("ExcludingTaxRedAmount") != m.end() && !m["ExcludingTaxRedAmount"].empty()) {
      excludingTaxRedAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxRedAmount"]));
    }
    if (m.find("ExcludingTaxRemainAmount") != m.end() && !m["ExcludingTaxRemainAmount"].empty()) {
      excludingTaxRemainAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxRemainAmount"]));
    }
    if (m.find("GmtBill") != m.end() && !m["GmtBill"].empty()) {
      gmtBill = make_shared<string>(boost::any_cast<string>(m["GmtBill"]));
    }
    if (m.find("GmtBillEnd") != m.end() && !m["GmtBillEnd"].empty()) {
      gmtBillEnd = make_shared<string>(boost::any_cast<string>(m["GmtBillEnd"]));
    }
    if (m.find("GmtBillStart") != m.end() && !m["GmtBillStart"].empty()) {
      gmtBillStart = make_shared<string>(boost::any_cast<string>(m["GmtBillStart"]));
    }
    if (m.find("GmtBuild") != m.end() && !m["GmtBuild"].empty()) {
      gmtBuild = make_shared<string>(boost::any_cast<string>(m["GmtBuild"]));
    }
    if (m.find("IsApply") != m.end() && !m["IsApply"].empty()) {
      isApply = make_shared<string>(boost::any_cast<string>(m["IsApply"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MajorBillNo") != m.end() && !m["MajorBillNo"].empty()) {
      majorBillNo = make_shared<string>(boost::any_cast<string>(m["MajorBillNo"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OuCode") != m.end() && !m["OuCode"].empty()) {
      ouCode = make_shared<string>(boost::any_cast<string>(m["OuCode"]));
    }
    if (m.find("ParentCategory") != m.end() && !m["ParentCategory"].empty()) {
      parentCategory = make_shared<string>(boost::any_cast<string>(m["ParentCategory"]));
    }
    if (m.find("ProductDomain") != m.end() && !m["ProductDomain"].empty()) {
      productDomain = make_shared<string>(boost::any_cast<string>(m["ProductDomain"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<double>(boost::any_cast<double>(m["Quantity"]));
    }
    if (m.find("QuantityUnit") != m.end() && !m["QuantityUnit"].empty()) {
      quantityUnit = make_shared<string>(boost::any_cast<string>(m["QuantityUnit"]));
    }
    if (m.find("RedAmount") != m.end() && !m["RedAmount"].empty()) {
      redAmount = make_shared<double>(boost::any_cast<double>(m["RedAmount"]));
    }
    if (m.find("RelatedId") != m.end() && !m["RelatedId"].empty()) {
      relatedId = make_shared<string>(boost::any_cast<string>(m["RelatedId"]));
    }
    if (m.find("RemainAmount") != m.end() && !m["RemainAmount"].empty()) {
      remainAmount = make_shared<double>(boost::any_cast<double>(m["RemainAmount"]));
    }
    if (m.find("RevenueType") != m.end() && !m["RevenueType"].empty()) {
      revenueType = make_shared<string>(boost::any_cast<string>(m["RevenueType"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("SiteId") != m.end() && !m["SiteId"].empty()) {
      siteId = make_shared<string>(boost::any_cast<string>(m["SiteId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["SourceId"]));
    }
    if (m.find("TaxAmount") != m.end() && !m["TaxAmount"].empty()) {
      taxAmount = make_shared<double>(boost::any_cast<double>(m["TaxAmount"]));
    }
    if (m.find("TaxRate") != m.end() && !m["TaxRate"].empty()) {
      taxRate = make_shared<double>(boost::any_cast<double>(m["TaxRate"]));
    }
    if (m.find("UnitPrice") != m.end() && !m["UnitPrice"].empty()) {
      unitPrice = make_shared<double>(boost::any_cast<double>(m["UnitPrice"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ApplyArInvoiceWithSourceRequestSourceList() = default;
};
class ApplyArInvoiceWithSourceRequest : public Darabonba::Model {
public:
  shared_ptr<ApplyArInvoiceWithSourceRequestAddress> address{};
  shared_ptr<double> amount{};
  shared_ptr<string> appCode{};
  shared_ptr<string> applier{};
  shared_ptr<string> applyDate{};
  shared_ptr<string> currencyCode{};
  shared_ptr<ApplyArInvoiceWithSourceRequestCustomer> customer{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<double> excludingTaxAmount{};
  shared_ptr<string> inputType{};
  shared_ptr<string> invoiceType{};
  shared_ptr<bool> isMerged{};
  shared_ptr<string> language{};
  shared_ptr<string> materialType{};
  shared_ptr<string> memo{};
  shared_ptr<string> ouCode{};
  shared_ptr<string> purchaserBankInfo{};
  shared_ptr<string> purchaserContactInfo{};
  shared_ptr<string> purchaserName{};
  shared_ptr<string> purchaserTaxNo{};
  shared_ptr<string> requestNo{};
  shared_ptr<string> sign{};
  shared_ptr<string> siteId{};
  shared_ptr<vector<ApplyArInvoiceWithSourceRequestSourceList>> sourceList{};
  shared_ptr<double> taxAmount{};
  shared_ptr<string> uuid{};

  ApplyArInvoiceWithSourceRequest() {}

  explicit ApplyArInvoiceWithSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (applier) {
      res["Applier"] = boost::any(*applier);
    }
    if (applyDate) {
      res["ApplyDate"] = boost::any(*applyDate);
    }
    if (currencyCode) {
      res["CurrencyCode"] = boost::any(*currencyCode);
    }
    if (customer) {
      res["Customer"] = customer ? boost::any(customer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (excludingTaxAmount) {
      res["ExcludingTaxAmount"] = boost::any(*excludingTaxAmount);
    }
    if (inputType) {
      res["InputType"] = boost::any(*inputType);
    }
    if (invoiceType) {
      res["InvoiceType"] = boost::any(*invoiceType);
    }
    if (isMerged) {
      res["IsMerged"] = boost::any(*isMerged);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (materialType) {
      res["MaterialType"] = boost::any(*materialType);
    }
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (ouCode) {
      res["OuCode"] = boost::any(*ouCode);
    }
    if (purchaserBankInfo) {
      res["PurchaserBankInfo"] = boost::any(*purchaserBankInfo);
    }
    if (purchaserContactInfo) {
      res["PurchaserContactInfo"] = boost::any(*purchaserContactInfo);
    }
    if (purchaserName) {
      res["PurchaserName"] = boost::any(*purchaserName);
    }
    if (purchaserTaxNo) {
      res["PurchaserTaxNo"] = boost::any(*purchaserTaxNo);
    }
    if (requestNo) {
      res["RequestNo"] = boost::any(*requestNo);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (siteId) {
      res["SiteId"] = boost::any(*siteId);
    }
    if (sourceList) {
      vector<boost::any> temp1;
      for(auto item1:*sourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceList"] = boost::any(temp1);
    }
    if (taxAmount) {
      res["TaxAmount"] = boost::any(*taxAmount);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        ApplyArInvoiceWithSourceRequestAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<ApplyArInvoiceWithSourceRequestAddress>(model1);
      }
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("Applier") != m.end() && !m["Applier"].empty()) {
      applier = make_shared<string>(boost::any_cast<string>(m["Applier"]));
    }
    if (m.find("ApplyDate") != m.end() && !m["ApplyDate"].empty()) {
      applyDate = make_shared<string>(boost::any_cast<string>(m["ApplyDate"]));
    }
    if (m.find("CurrencyCode") != m.end() && !m["CurrencyCode"].empty()) {
      currencyCode = make_shared<string>(boost::any_cast<string>(m["CurrencyCode"]));
    }
    if (m.find("Customer") != m.end() && !m["Customer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Customer"].type()) {
        ApplyArInvoiceWithSourceRequestCustomer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Customer"]));
        customer = make_shared<ApplyArInvoiceWithSourceRequestCustomer>(model1);
      }
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ExcludingTaxAmount") != m.end() && !m["ExcludingTaxAmount"].empty()) {
      excludingTaxAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxAmount"]));
    }
    if (m.find("InputType") != m.end() && !m["InputType"].empty()) {
      inputType = make_shared<string>(boost::any_cast<string>(m["InputType"]));
    }
    if (m.find("InvoiceType") != m.end() && !m["InvoiceType"].empty()) {
      invoiceType = make_shared<string>(boost::any_cast<string>(m["InvoiceType"]));
    }
    if (m.find("IsMerged") != m.end() && !m["IsMerged"].empty()) {
      isMerged = make_shared<bool>(boost::any_cast<bool>(m["IsMerged"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MaterialType") != m.end() && !m["MaterialType"].empty()) {
      materialType = make_shared<string>(boost::any_cast<string>(m["MaterialType"]));
    }
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("OuCode") != m.end() && !m["OuCode"].empty()) {
      ouCode = make_shared<string>(boost::any_cast<string>(m["OuCode"]));
    }
    if (m.find("PurchaserBankInfo") != m.end() && !m["PurchaserBankInfo"].empty()) {
      purchaserBankInfo = make_shared<string>(boost::any_cast<string>(m["PurchaserBankInfo"]));
    }
    if (m.find("PurchaserContactInfo") != m.end() && !m["PurchaserContactInfo"].empty()) {
      purchaserContactInfo = make_shared<string>(boost::any_cast<string>(m["PurchaserContactInfo"]));
    }
    if (m.find("PurchaserName") != m.end() && !m["PurchaserName"].empty()) {
      purchaserName = make_shared<string>(boost::any_cast<string>(m["PurchaserName"]));
    }
    if (m.find("PurchaserTaxNo") != m.end() && !m["PurchaserTaxNo"].empty()) {
      purchaserTaxNo = make_shared<string>(boost::any_cast<string>(m["PurchaserTaxNo"]));
    }
    if (m.find("RequestNo") != m.end() && !m["RequestNo"].empty()) {
      requestNo = make_shared<string>(boost::any_cast<string>(m["RequestNo"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("SiteId") != m.end() && !m["SiteId"].empty()) {
      siteId = make_shared<string>(boost::any_cast<string>(m["SiteId"]));
    }
    if (m.find("SourceList") != m.end() && !m["SourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceList"].type()) {
        vector<ApplyArInvoiceWithSourceRequestSourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyArInvoiceWithSourceRequestSourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceList = make_shared<vector<ApplyArInvoiceWithSourceRequestSourceList>>(expect1);
      }
    }
    if (m.find("TaxAmount") != m.end() && !m["TaxAmount"].empty()) {
      taxAmount = make_shared<double>(boost::any_cast<double>(m["TaxAmount"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ApplyArInvoiceWithSourceRequest() = default;
};
class ApplyArInvoiceWithSourceResponseBodyReturnValue : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> outerSystemEncryptStr{};
  shared_ptr<string> outerSystemSignStr{};
  shared_ptr<string> sign{};

  ApplyArInvoiceWithSourceResponseBodyReturnValue() {}

  explicit ApplyArInvoiceWithSourceResponseBodyReturnValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (outerSystemEncryptStr) {
      res["OuterSystemEncryptStr"] = boost::any(*outerSystemEncryptStr);
    }
    if (outerSystemSignStr) {
      res["OuterSystemSignStr"] = boost::any(*outerSystemSignStr);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("OuterSystemEncryptStr") != m.end() && !m["OuterSystemEncryptStr"].empty()) {
      outerSystemEncryptStr = make_shared<string>(boost::any_cast<string>(m["OuterSystemEncryptStr"]));
    }
    if (m.find("OuterSystemSignStr") != m.end() && !m["OuterSystemSignStr"].empty()) {
      outerSystemSignStr = make_shared<string>(boost::any_cast<string>(m["OuterSystemSignStr"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
  }


  virtual ~ApplyArInvoiceWithSourceResponseBodyReturnValue() = default;
};
class ApplyArInvoiceWithSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<ApplyArInvoiceWithSourceResponseBodyReturnValue> returnValue{};

  ApplyArInvoiceWithSourceResponseBody() {}

  explicit ApplyArInvoiceWithSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (returnValue) {
      res["ReturnValue"] = returnValue ? boost::any(returnValue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ReturnValue") != m.end() && !m["ReturnValue"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReturnValue"].type()) {
        ApplyArInvoiceWithSourceResponseBodyReturnValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReturnValue"]));
        returnValue = make_shared<ApplyArInvoiceWithSourceResponseBodyReturnValue>(model1);
      }
    }
  }


  virtual ~ApplyArInvoiceWithSourceResponseBody() = default;
};
class ApplyArInvoiceWithSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyArInvoiceWithSourceResponseBody> body{};

  ApplyArInvoiceWithSourceResponse() {}

  explicit ApplyArInvoiceWithSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApplyArInvoiceWithSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyArInvoiceWithSourceResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyArInvoiceWithSourceResponse() = default;
};
class ApplyBlackInfoExportRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> blackType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ApplyBlackInfoExportRequest() {}

  explicit ApplyBlackInfoExportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (blackType) {
      res["BlackType"] = boost::any(*blackType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("BlackType") != m.end() && !m["BlackType"].empty()) {
      blackType = make_shared<string>(boost::any_cast<string>(m["BlackType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ApplyBlackInfoExportRequest() = default;
};
class ApplyBlackInfoExportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  ApplyBlackInfoExportResponseBody() {}

  explicit ApplyBlackInfoExportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~ApplyBlackInfoExportResponseBody() = default;
};
class ApplyBlackInfoExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyBlackInfoExportResponseBody> body{};

  ApplyBlackInfoExportResponse() {}

  explicit ApplyBlackInfoExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApplyBlackInfoExportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyBlackInfoExportResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyBlackInfoExportResponse() = default;
};
class ApplyCallRecordExportRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> callDate{};
  shared_ptr<string> callId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  ApplyCallRecordExportRequest() {}

  explicit ApplyCallRecordExportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (callDate) {
      res["CallDate"] = boost::any(*callDate);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("CallDate") != m.end() && !m["CallDate"].empty()) {
      callDate = make_shared<string>(boost::any_cast<string>(m["CallDate"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~ApplyCallRecordExportRequest() = default;
};
class ApplyCallRecordExportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  ApplyCallRecordExportResponseBody() {}

  explicit ApplyCallRecordExportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~ApplyCallRecordExportResponseBody() = default;
};
class ApplyCallRecordExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyCallRecordExportResponseBody> body{};

  ApplyCallRecordExportResponse() {}

  explicit ApplyCallRecordExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApplyCallRecordExportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyCallRecordExportResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyCallRecordExportResponse() = default;
};
class ApplyGroupNumberExportRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ApplyGroupNumberExportRequest() {}

  explicit ApplyGroupNumberExportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ApplyGroupNumberExportRequest() = default;
};
class ApplyGroupNumberExportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  ApplyGroupNumberExportResponseBody() {}

  explicit ApplyGroupNumberExportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~ApplyGroupNumberExportResponseBody() = default;
};
class ApplyGroupNumberExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyGroupNumberExportResponseBody> body{};

  ApplyGroupNumberExportResponse() {}

  explicit ApplyGroupNumberExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApplyGroupNumberExportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyGroupNumberExportResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyGroupNumberExportResponse() = default;
};
class ApplyRingToneRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> id{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> playType{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ApplyRingToneRequest() {}

  explicit ApplyRingToneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playType) {
      res["PlayType"] = boost::any(*playType);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayType") != m.end() && !m["PlayType"].empty()) {
      playType = make_shared<string>(boost::any_cast<string>(m["PlayType"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ApplyRingToneRequest() = default;
};
class ApplyRingToneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  ApplyRingToneResponseBody() {}

  explicit ApplyRingToneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~ApplyRingToneResponseBody() = default;
};
class ApplyRingToneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyRingToneResponseBody> body{};

  ApplyRingToneResponse() {}

  explicit ApplyRingToneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApplyRingToneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyRingToneResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyRingToneResponse() = default;
};
class BatchOccupySecretResRequestBatchOccupyList : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> orderDetailId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> partnerKey{};
  shared_ptr<long> resType{};
  shared_ptr<long> secretNoType{};

  BatchOccupySecretResRequestBatchOccupyList() {}

  explicit BatchOccupySecretResRequestBatchOccupyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (orderDetailId) {
      res["OrderDetailId"] = boost::any(*orderDetailId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (partnerKey) {
      res["PartnerKey"] = boost::any(*partnerKey);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (secretNoType) {
      res["SecretNoType"] = boost::any(*secretNoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("OrderDetailId") != m.end() && !m["OrderDetailId"].empty()) {
      orderDetailId = make_shared<long>(boost::any_cast<long>(m["OrderDetailId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("PartnerKey") != m.end() && !m["PartnerKey"].empty()) {
      partnerKey = make_shared<string>(boost::any_cast<string>(m["PartnerKey"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("SecretNoType") != m.end() && !m["SecretNoType"].empty()) {
      secretNoType = make_shared<long>(boost::any_cast<long>(m["SecretNoType"]));
    }
  }


  virtual ~BatchOccupySecretResRequestBatchOccupyList() = default;
};
class BatchOccupySecretResRequest : public Darabonba::Model {
public:
  shared_ptr<vector<BatchOccupySecretResRequestBatchOccupyList>> batchOccupyList{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  BatchOccupySecretResRequest() {}

  explicit BatchOccupySecretResRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchOccupyList) {
      vector<boost::any> temp1;
      for(auto item1:*batchOccupyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BatchOccupyList"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchOccupyList") != m.end() && !m["BatchOccupyList"].empty()) {
      if (typeid(vector<boost::any>) == m["BatchOccupyList"].type()) {
        vector<BatchOccupySecretResRequestBatchOccupyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BatchOccupyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchOccupySecretResRequestBatchOccupyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        batchOccupyList = make_shared<vector<BatchOccupySecretResRequestBatchOccupyList>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~BatchOccupySecretResRequest() = default;
};
class BatchOccupySecretResShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> batchOccupyListShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  BatchOccupySecretResShrinkRequest() {}

  explicit BatchOccupySecretResShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchOccupyListShrink) {
      res["BatchOccupyList"] = boost::any(*batchOccupyListShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchOccupyList") != m.end() && !m["BatchOccupyList"].empty()) {
      batchOccupyListShrink = make_shared<string>(boost::any_cast<string>(m["BatchOccupyList"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~BatchOccupySecretResShrinkRequest() = default;
};
class BatchOccupySecretResResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchOccupySecretResResponseBody() {}

  explicit BatchOccupySecretResResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchOccupySecretResResponseBody() = default;
};
class BatchOccupySecretResResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchOccupySecretResResponseBody> body{};

  BatchOccupySecretResResponse() {}

  explicit BatchOccupySecretResResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchOccupySecretResResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchOccupySecretResResponseBody>(model1);
      }
    }
  }


  virtual ~BatchOccupySecretResResponse() = default;
};
class BindResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> asrModelId{};
  shared_ptr<bool> asrStatus{};
  shared_ptr<string> axnExtensionB{};
  shared_ptr<string> billId{};
  shared_ptr<string> expTime{};
  shared_ptr<bool> isRecord{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  BindResourceRequest() {}

  explicit BindResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrModelId) {
      res["AsrModelId"] = boost::any(*asrModelId);
    }
    if (asrStatus) {
      res["AsrStatus"] = boost::any(*asrStatus);
    }
    if (axnExtensionB) {
      res["AxnExtensionB"] = boost::any(*axnExtensionB);
    }
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (expTime) {
      res["ExpTime"] = boost::any(*expTime);
    }
    if (isRecord) {
      res["IsRecord"] = boost::any(*isRecord);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsrModelId") != m.end() && !m["AsrModelId"].empty()) {
      asrModelId = make_shared<string>(boost::any_cast<string>(m["AsrModelId"]));
    }
    if (m.find("AsrStatus") != m.end() && !m["AsrStatus"].empty()) {
      asrStatus = make_shared<bool>(boost::any_cast<bool>(m["AsrStatus"]));
    }
    if (m.find("AxnExtensionB") != m.end() && !m["AxnExtensionB"].empty()) {
      axnExtensionB = make_shared<string>(boost::any_cast<string>(m["AxnExtensionB"]));
    }
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("ExpTime") != m.end() && !m["ExpTime"].empty()) {
      expTime = make_shared<string>(boost::any_cast<string>(m["ExpTime"]));
    }
    if (m.find("IsRecord") != m.end() && !m["IsRecord"].empty()) {
      isRecord = make_shared<bool>(boost::any_cast<bool>(m["IsRecord"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~BindResourceRequest() = default;
};
class BindResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  BindResourceResponseBody() {}

  explicit BindResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~BindResourceResponseBody() = default;
};
class BindResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindResourceResponseBody> body{};

  BindResourceResponse() {}

  explicit BindResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BindResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindResourceResponseBody>(model1);
      }
    }
  }


  virtual ~BindResourceResponse() = default;
};
class BlackOperateRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> blackMap{};
  shared_ptr<string> blackType{};
  shared_ptr<string> operateType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  BlackOperateRequest() {}

  explicit BlackOperateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (blackMap) {
      res["BlackMap"] = boost::any(*blackMap);
    }
    if (blackType) {
      res["BlackType"] = boost::any(*blackType);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("BlackMap") != m.end() && !m["BlackMap"].empty()) {
      blackMap = make_shared<string>(boost::any_cast<string>(m["BlackMap"]));
    }
    if (m.find("BlackType") != m.end() && !m["BlackType"].empty()) {
      blackType = make_shared<string>(boost::any_cast<string>(m["BlackType"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~BlackOperateRequest() = default;
};
class BlackOperateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};

  BlackOperateResponseBody() {}

  explicit BlackOperateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~BlackOperateResponseBody() = default;
};
class BlackOperateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BlackOperateResponseBody> body{};

  BlackOperateResponse() {}

  explicit BlackOperateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BlackOperateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BlackOperateResponseBody>(model1);
      }
    }
  }


  virtual ~BlackOperateResponse() = default;
};
class CreateCertifyInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNo{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateCertifyInfoRequest() {}

  explicit CreateCertifyInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNo) {
      res["PhoneNo"] = boost::any(*phoneNo);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNo") != m.end() && !m["PhoneNo"].empty()) {
      phoneNo = make_shared<string>(boost::any_cast<string>(m["PhoneNo"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateCertifyInfoRequest() = default;
};
class CreateCertifyInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  CreateCertifyInfoResponseBody() {}

  explicit CreateCertifyInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~CreateCertifyInfoResponseBody() = default;
};
class CreateCertifyInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCertifyInfoResponseBody> body{};

  CreateCertifyInfoResponse() {}

  explicit CreateCertifyInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCertifyInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertifyInfoResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertifyInfoResponse() = default;
};
class CreateContactsRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateContactsRequest() {}

  explicit CreateContactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateContactsRequest() = default;
};
class CreateContactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  CreateContactsResponseBody() {}

  explicit CreateContactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~CreateContactsResponseBody() = default;
};
class CreateContactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateContactsResponseBody> body{};

  CreateContactsResponse() {}

  explicit CreateContactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateContactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateContactsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateContactsResponse() = default;
};
class CreateGroupDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> numberList{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateGroupDetailRequest() {}

  explicit CreateGroupDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (numberList) {
      res["NumberList"] = boost::any(*numberList);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("NumberList") != m.end() && !m["NumberList"].empty()) {
      numberList = make_shared<string>(boost::any_cast<string>(m["NumberList"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateGroupDetailRequest() = default;
};
class CreateGroupDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  CreateGroupDetailResponseBody() {}

  explicit CreateGroupDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~CreateGroupDetailResponseBody() = default;
};
class CreateGroupDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupDetailResponseBody> body{};

  CreateGroupDetailResponse() {}

  explicit CreateGroupDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGroupDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupDetailResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupDetailResponse() = default;
};
class CreateGroupInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> numberList{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateGroupInfoRequest() {}

  explicit CreateGroupInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (numberList) {
      res["NumberList"] = boost::any(*numberList);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NumberList") != m.end() && !m["NumberList"].empty()) {
      numberList = make_shared<string>(boost::any_cast<string>(m["NumberList"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateGroupInfoRequest() = default;
};
class CreateGroupInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  CreateGroupInfoResponseBody() {}

  explicit CreateGroupInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~CreateGroupInfoResponseBody() = default;
};
class CreateGroupInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupInfoResponseBody> body{};

  CreateGroupInfoResponse() {}

  explicit CreateGroupInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGroupInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupInfoResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupInfoResponse() = default;
};
class CreateLogicalDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<string> country{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<string> message{};
  shared_ptr<string> pk{};
  shared_ptr<string> prodCode{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> taskIdentifier{};

  CreateLogicalDeleteRequest() {}

  explicit CreateLogicalDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
  }


  virtual ~CreateLogicalDeleteRequest() = default;
};
class CreateLogicalDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<string> country{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<string> message{};
  shared_ptr<string> pk{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> taskIdentifier{};

  CreateLogicalDeleteResponseBody() {}

  explicit CreateLogicalDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
  }


  virtual ~CreateLogicalDeleteResponseBody() = default;
};
class CreateLogicalDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLogicalDeleteResponseBody> body{};

  CreateLogicalDeleteResponse() {}

  explicit CreateLogicalDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateLogicalDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLogicalDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLogicalDeleteResponse() = default;
};
class CreateMessageCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateMessageCallbackRequest() {}

  explicit CreateMessageCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateMessageCallbackRequest() = default;
};
class CreateMessageCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};

  CreateMessageCallbackResponseBody() {}

  explicit CreateMessageCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~CreateMessageCallbackResponseBody() = default;
};
class CreateMessageCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMessageCallbackResponseBody> body{};

  CreateMessageCallbackResponse() {}

  explicit CreateMessageCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMessageCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMessageCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMessageCallbackResponse() = default;
};
class CreateMessageQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> billIds{};
  shared_ptr<string> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> queueName{};
  shared_ptr<string> queueTitle{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateMessageQueueRequest() {}

  explicit CreateMessageQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billIds) {
      res["BillIds"] = boost::any(*billIds);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (queueTitle) {
      res["QueueTitle"] = boost::any(*queueTitle);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillIds") != m.end() && !m["BillIds"].empty()) {
      billIds = make_shared<string>(boost::any_cast<string>(m["BillIds"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("QueueTitle") != m.end() && !m["QueueTitle"].empty()) {
      queueTitle = make_shared<string>(boost::any_cast<string>(m["QueueTitle"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateMessageQueueRequest() = default;
};
class CreateMessageQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  CreateMessageQueueResponseBody() {}

  explicit CreateMessageQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~CreateMessageQueueResponseBody() = default;
};
class CreateMessageQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMessageQueueResponseBody> body{};

  CreateMessageQueueResponse() {}

  explicit CreateMessageQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMessageQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMessageQueueResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMessageQueueResponse() = default;
};
class CreatePhysicalDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<string> country{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<string> message{};
  shared_ptr<string> pk{};
  shared_ptr<string> prodCode{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> taskIdentifier{};

  CreatePhysicalDeleteRequest() {}

  explicit CreatePhysicalDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
  }


  virtual ~CreatePhysicalDeleteRequest() = default;
};
class CreatePhysicalDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<string> country{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<string> message{};
  shared_ptr<string> pk{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> taskIdentifier{};

  CreatePhysicalDeleteResponseBody() {}

  explicit CreatePhysicalDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
  }


  virtual ~CreatePhysicalDeleteResponseBody() = default;
};
class CreatePhysicalDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePhysicalDeleteResponseBody> body{};

  CreatePhysicalDeleteResponse() {}

  explicit CreatePhysicalDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePhysicalDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePhysicalDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePhysicalDeleteResponse() = default;
};
class CreatePoolInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolName{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreatePoolInfoRequest() {}

  explicit CreatePoolInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreatePoolInfoRequest() = default;
};
class CreatePoolInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  CreatePoolInfoResponseBody() {}

  explicit CreatePoolInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~CreatePoolInfoResponseBody() = default;
};
class CreatePoolInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePoolInfoResponseBody> body{};

  CreatePoolInfoResponse() {}

  explicit CreatePoolInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePoolInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePoolInfoResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePoolInfoResponse() = default;
};
class CreateProductRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> prodId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateProductRequest() {}

  explicit CreateProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (prodId) {
      res["ProdId"] = boost::any(*prodId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ProdId") != m.end() && !m["ProdId"].empty()) {
      prodId = make_shared<string>(boost::any_cast<string>(m["ProdId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateProductRequest() = default;
};
class CreateProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  CreateProductResponseBody() {}

  explicit CreateProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~CreateProductResponseBody() = default;
};
class CreateProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductResponseBody> body{};

  CreateProductResponse() {}

  explicit CreateProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductResponse() = default;
};
class CreateRingToneRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> fileKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> playType{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ringName{};
  shared_ptr<string> tts{};

  CreateRingToneRequest() {}

  explicit CreateRingToneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (fileKey) {
      res["FileKey"] = boost::any(*fileKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playType) {
      res["PlayType"] = boost::any(*playType);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ringName) {
      res["RingName"] = boost::any(*ringName);
    }
    if (tts) {
      res["Tts"] = boost::any(*tts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("FileKey") != m.end() && !m["FileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["FileKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayType") != m.end() && !m["PlayType"].empty()) {
      playType = make_shared<string>(boost::any_cast<string>(m["PlayType"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RingName") != m.end() && !m["RingName"].empty()) {
      ringName = make_shared<string>(boost::any_cast<string>(m["RingName"]));
    }
    if (m.find("Tts") != m.end() && !m["Tts"].empty()) {
      tts = make_shared<string>(boost::any_cast<string>(m["Tts"]));
    }
  }


  virtual ~CreateRingToneRequest() = default;
};
class CreateRingToneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  CreateRingToneResponseBody() {}

  explicit CreateRingToneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~CreateRingToneResponseBody() = default;
};
class CreateRingToneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRingToneResponseBody> body{};

  CreateRingToneResponse() {}

  explicit CreateRingToneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRingToneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRingToneResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRingToneResponse() = default;
};
class CreateSubsTrialRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneA{};
  shared_ptr<string> phoneB{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateSubsTrialRequest() {}

  explicit CreateSubsTrialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneA) {
      res["PhoneA"] = boost::any(*phoneA);
    }
    if (phoneB) {
      res["PhoneB"] = boost::any(*phoneB);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneA") != m.end() && !m["PhoneA"].empty()) {
      phoneA = make_shared<string>(boost::any_cast<string>(m["PhoneA"]));
    }
    if (m.find("PhoneB") != m.end() && !m["PhoneB"].empty()) {
      phoneB = make_shared<string>(boost::any_cast<string>(m["PhoneB"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<string>(boost::any_cast<string>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateSubsTrialRequest() = default;
};
class CreateSubsTrialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  CreateSubsTrialResponseBody() {}

  explicit CreateSubsTrialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~CreateSubsTrialResponseBody() = default;
};
class CreateSubsTrialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSubsTrialResponseBody> body{};

  CreateSubsTrialResponse() {}

  explicit CreateSubsTrialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSubsTrialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSubsTrialResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSubsTrialResponse() = default;
};
class CreateTransferRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> city{};
  shared_ptr<string> numberList{};
  shared_ptr<string> originBillId{};
  shared_ptr<string> originName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> targetBillId{};
  shared_ptr<string> targetName{};
  shared_ptr<long> total{};
  shared_ptr<long> transferType{};

  CreateTransferRecordRequest() {}

  explicit CreateTransferRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (numberList) {
      res["NumberList"] = boost::any(*numberList);
    }
    if (originBillId) {
      res["OriginBillId"] = boost::any(*originBillId);
    }
    if (originName) {
      res["OriginName"] = boost::any(*originName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (targetBillId) {
      res["TargetBillId"] = boost::any(*targetBillId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (transferType) {
      res["TransferType"] = boost::any(*transferType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("NumberList") != m.end() && !m["NumberList"].empty()) {
      numberList = make_shared<string>(boost::any_cast<string>(m["NumberList"]));
    }
    if (m.find("OriginBillId") != m.end() && !m["OriginBillId"].empty()) {
      originBillId = make_shared<string>(boost::any_cast<string>(m["OriginBillId"]));
    }
    if (m.find("OriginName") != m.end() && !m["OriginName"].empty()) {
      originName = make_shared<string>(boost::any_cast<string>(m["OriginName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TargetBillId") != m.end() && !m["TargetBillId"].empty()) {
      targetBillId = make_shared<string>(boost::any_cast<string>(m["TargetBillId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("TransferType") != m.end() && !m["TransferType"].empty()) {
      transferType = make_shared<long>(boost::any_cast<long>(m["TransferType"]));
    }
  }


  virtual ~CreateTransferRecordRequest() = default;
};
class CreateTransferRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  CreateTransferRecordResponseBody() {}

  explicit CreateTransferRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~CreateTransferRecordResponseBody() = default;
};
class CreateTransferRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTransferRecordResponseBody> body{};

  CreateTransferRecordResponse() {}

  explicit CreateTransferRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTransferRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTransferRecordResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTransferRecordResponse() = default;
};
class DeleteCertifyInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteCertifyInfoRequest() {}

  explicit DeleteCertifyInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteCertifyInfoRequest() = default;
};
class DeleteCertifyInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  DeleteCertifyInfoResponseBody() {}

  explicit DeleteCertifyInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~DeleteCertifyInfoResponseBody() = default;
};
class DeleteCertifyInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCertifyInfoResponseBody> body{};

  DeleteCertifyInfoResponse() {}

  explicit DeleteCertifyInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCertifyInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCertifyInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCertifyInfoResponse() = default;
};
class DeleteContactsRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> id{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteContactsRequest() {}

  explicit DeleteContactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteContactsRequest() = default;
};
class DeleteContactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  DeleteContactsResponseBody() {}

  explicit DeleteContactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~DeleteContactsResponseBody() = default;
};
class DeleteContactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteContactsResponseBody> body{};

  DeleteContactsResponse() {}

  explicit DeleteContactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteContactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteContactsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteContactsResponse() = default;
};
class DeleteGroupDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> idList{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteGroupDetailRequest() {}

  explicit DeleteGroupDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (idList) {
      res["IdList"] = boost::any(*idList);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("IdList") != m.end() && !m["IdList"].empty()) {
      idList = make_shared<string>(boost::any_cast<string>(m["IdList"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteGroupDetailRequest() = default;
};
class DeleteGroupDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  DeleteGroupDetailResponseBody() {}

  explicit DeleteGroupDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~DeleteGroupDetailResponseBody() = default;
};
class DeleteGroupDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGroupDetailResponseBody> body{};

  DeleteGroupDetailResponse() {}

  explicit DeleteGroupDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGroupDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupDetailResponse() = default;
};
class DeleteMessageCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteMessageCallbackRequest() {}

  explicit DeleteMessageCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteMessageCallbackRequest() = default;
};
class DeleteMessageCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  DeleteMessageCallbackResponseBody() {}

  explicit DeleteMessageCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~DeleteMessageCallbackResponseBody() = default;
};
class DeleteMessageCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMessageCallbackResponseBody> body{};

  DeleteMessageCallbackResponse() {}

  explicit DeleteMessageCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteMessageCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMessageCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMessageCallbackResponse() = default;
};
class DeleteRingToneRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> id{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteRingToneRequest() {}

  explicit DeleteRingToneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteRingToneRequest() = default;
};
class DeleteRingToneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  DeleteRingToneResponseBody() {}

  explicit DeleteRingToneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~DeleteRingToneResponseBody() = default;
};
class DeleteRingToneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRingToneResponseBody> body{};

  DeleteRingToneResponse() {}

  explicit DeleteRingToneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRingToneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRingToneResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRingToneResponse() = default;
};
class DownloadCompleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DownloadCompleteRequest() {}

  explicit DownloadCompleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DownloadCompleteRequest() = default;
};
class DownloadCompleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  DownloadCompleteResponseBody() {}

  explicit DownloadCompleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~DownloadCompleteResponseBody() = default;
};
class DownloadCompleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DownloadCompleteResponseBody> body{};

  DownloadCompleteResponse() {}

  explicit DownloadCompleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DownloadCompleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DownloadCompleteResponseBody>(model1);
      }
    }
  }


  virtual ~DownloadCompleteResponse() = default;
};
class ExportResRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resBindStatus{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  ExportResRequest() {}

  explicit ExportResRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resBindStatus) {
      res["ResBindStatus"] = boost::any(*resBindStatus);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResBindStatus") != m.end() && !m["ResBindStatus"].empty()) {
      resBindStatus = make_shared<long>(boost::any_cast<long>(m["ResBindStatus"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~ExportResRequest() = default;
};
class ExportResResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  ExportResResponseBody() {}

  explicit ExportResResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~ExportResResponseBody() = default;
};
class ExportResResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportResResponseBody> body{};

  ExportResResponse() {}

  explicit ExportResResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExportResResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportResResponseBody>(model1);
      }
    }
  }


  virtual ~ExportResResponse() = default;
};
class GetEinvoicePdfDataRequestCustomer : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerSite{};
  shared_ptr<string> customerSystem{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> language{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  GetEinvoicePdfDataRequestCustomer() {}

  explicit GetEinvoicePdfDataRequestCustomer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (customerSite) {
      res["CustomerSite"] = boost::any(*customerSite);
    }
    if (customerSystem) {
      res["CustomerSystem"] = boost::any(*customerSystem);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("CustomerSite") != m.end() && !m["CustomerSite"].empty()) {
      customerSite = make_shared<string>(boost::any_cast<string>(m["CustomerSite"]));
    }
    if (m.find("CustomerSystem") != m.end() && !m["CustomerSystem"].empty()) {
      customerSystem = make_shared<string>(boost::any_cast<string>(m["CustomerSystem"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetEinvoicePdfDataRequestCustomer() = default;
};
class GetEinvoicePdfDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<GetEinvoicePdfDataRequestCustomer> customer{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<string> language{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  GetEinvoicePdfDataRequest() {}

  explicit GetEinvoicePdfDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (customer) {
      res["Customer"] = customer ? boost::any(customer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("Customer") != m.end() && !m["Customer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Customer"].type()) {
        GetEinvoicePdfDataRequestCustomer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Customer"]));
        customer = make_shared<GetEinvoicePdfDataRequestCustomer>(model1);
      }
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetEinvoicePdfDataRequest() = default;
};
class GetEinvoicePdfDataResponseBodyReturnValue : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<vector<long>> EInvoiceData{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<string> language{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  GetEinvoicePdfDataResponseBodyReturnValue() {}

  explicit GetEinvoicePdfDataResponseBodyReturnValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (EInvoiceData) {
      res["EInvoiceData"] = boost::any(*EInvoiceData);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("EInvoiceData") != m.end() && !m["EInvoiceData"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["EInvoiceData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EInvoiceData"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      EInvoiceData = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetEinvoicePdfDataResponseBodyReturnValue() = default;
};
class GetEinvoicePdfDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<GetEinvoicePdfDataResponseBodyReturnValue> returnValue{};

  GetEinvoicePdfDataResponseBody() {}

  explicit GetEinvoicePdfDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (returnValue) {
      res["ReturnValue"] = returnValue ? boost::any(returnValue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ReturnValue") != m.end() && !m["ReturnValue"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReturnValue"].type()) {
        GetEinvoicePdfDataResponseBodyReturnValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReturnValue"]));
        returnValue = make_shared<GetEinvoicePdfDataResponseBodyReturnValue>(model1);
      }
    }
  }


  virtual ~GetEinvoicePdfDataResponseBody() = default;
};
class GetEinvoicePdfDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEinvoicePdfDataResponseBody> body{};

  GetEinvoicePdfDataResponse() {}

  explicit GetEinvoicePdfDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEinvoicePdfDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEinvoicePdfDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetEinvoicePdfDataResponse() = default;
};
class GetSecretAsrInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> callTime{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> prodCode{};

  GetSecretAsrInfoRequest() {}

  explicit GetSecretAsrInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      callTime = make_shared<string>(boost::any_cast<string>(m["CallTime"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
  }


  virtual ~GetSecretAsrInfoRequest() = default;
};
class GetSecretAsrInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<string> text{};

  GetSecretAsrInfoResponseBodyData() {}

  explicit GetSecretAsrInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetSecretAsrInfoResponseBodyData() = default;
};
class GetSecretAsrInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetSecretAsrInfoResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetSecretAsrInfoResponseBody() {}

  explicit GetSecretAsrInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetSecretAsrInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSecretAsrInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetSecretAsrInfoResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSecretAsrInfoResponseBody() = default;
};
class GetSecretAsrInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSecretAsrInfoResponseBody> body{};

  GetSecretAsrInfoResponse() {}

  explicit GetSecretAsrInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSecretAsrInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecretAsrInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecretAsrInfoResponse() = default;
};
class GetUserResourceTagStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> resourceType{};

  GetUserResourceTagStatusRequest() {}

  explicit GetUserResourceTagStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
  }


  virtual ~GetUserResourceTagStatusRequest() = default;
};
class GetUserResourceTagStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetUserResourceTagStatusResponseBody() {}

  explicit GetUserResourceTagStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUserResourceTagStatusResponseBody() = default;
};
class GetUserResourceTagStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserResourceTagStatusResponseBody> body{};

  GetUserResourceTagStatusResponse() {}

  explicit GetUserResourceTagStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserResourceTagStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResourceTagStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResourceTagStatusResponse() = default;
};
class ListAsrLanguageModelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListAsrLanguageModelsRequest() {}

  explicit ListAsrLanguageModelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListAsrLanguageModelsRequest() = default;
};
class ListAsrLanguageModelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListAsrLanguageModelsResponseBody() {}

  explicit ListAsrLanguageModelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAsrLanguageModelsResponseBody() = default;
};
class ListAsrLanguageModelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAsrLanguageModelsResponseBody> body{};

  ListAsrLanguageModelsResponse() {}

  explicit ListAsrLanguageModelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAsrLanguageModelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAsrLanguageModelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAsrLanguageModelsResponse() = default;
};
class LockResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  LockResourceRequest() {}

  explicit LockResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~LockResourceRequest() = default;
};
class LockResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  LockResourceResponseBody() {}

  explicit LockResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~LockResourceResponseBody() = default;
};
class LockResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LockResourceResponseBody> body{};

  LockResourceResponse() {}

  explicit LockResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LockResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LockResourceResponseBody>(model1);
      }
    }
  }


  virtual ~LockResourceResponse() = default;
};
class OccupySecretResRequest : public Darabonba::Model {
public:
  shared_ptr<string> city{};
  shared_ptr<bool> isDisplayPool{};
  shared_ptr<string> noLike{};
  shared_ptr<long> orderDetailId{};
  shared_ptr<long> orderId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> partnerKey{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> secretNoType{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> secretNo{};

  OccupySecretResRequest() {}

  explicit OccupySecretResRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (isDisplayPool) {
      res["IsDisplayPool"] = boost::any(*isDisplayPool);
    }
    if (noLike) {
      res["NoLike"] = boost::any(*noLike);
    }
    if (orderDetailId) {
      res["OrderDetailId"] = boost::any(*orderDetailId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (partnerKey) {
      res["PartnerKey"] = boost::any(*partnerKey);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNoType) {
      res["SecretNoType"] = boost::any(*secretNoType);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (secretNo) {
      res["secretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("IsDisplayPool") != m.end() && !m["IsDisplayPool"].empty()) {
      isDisplayPool = make_shared<bool>(boost::any_cast<bool>(m["IsDisplayPool"]));
    }
    if (m.find("NoLike") != m.end() && !m["NoLike"].empty()) {
      noLike = make_shared<string>(boost::any_cast<string>(m["NoLike"]));
    }
    if (m.find("OrderDetailId") != m.end() && !m["OrderDetailId"].empty()) {
      orderDetailId = make_shared<long>(boost::any_cast<long>(m["OrderDetailId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PartnerKey") != m.end() && !m["PartnerKey"].empty()) {
      partnerKey = make_shared<string>(boost::any_cast<string>(m["PartnerKey"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNoType") != m.end() && !m["SecretNoType"].empty()) {
      secretNoType = make_shared<long>(boost::any_cast<long>(m["SecretNoType"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("secretNo") != m.end() && !m["secretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["secretNo"]));
    }
  }


  virtual ~OccupySecretResRequest() = default;
};
class OccupySecretResResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OccupySecretResResponseBody() {}

  explicit OccupySecretResResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~OccupySecretResResponseBody() = default;
};
class OccupySecretResResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OccupySecretResResponseBody> body{};

  OccupySecretResResponse() {}

  explicit OccupySecretResResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OccupySecretResResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OccupySecretResResponseBody>(model1);
      }
    }
  }


  virtual ~OccupySecretResResponse() = default;
};
class OrderSucceededCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> data{};

  OrderSucceededCallbackRequest() {}

  explicit OrderSucceededCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~OrderSucceededCallbackRequest() = default;
};
class OrderSucceededCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<string> synchro{};

  OrderSucceededCallbackResponseBody() {}

  explicit OrderSucceededCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (synchro) {
      res["Synchro"] = boost::any(*synchro);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Synchro") != m.end() && !m["Synchro"].empty()) {
      synchro = make_shared<string>(boost::any_cast<string>(m["Synchro"]));
    }
  }


  virtual ~OrderSucceededCallbackResponseBody() = default;
};
class OrderSucceededCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OrderSucceededCallbackResponseBody> body{};

  OrderSucceededCallbackResponse() {}

  explicit OrderSucceededCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OrderSucceededCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OrderSucceededCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~OrderSucceededCallbackResponse() = default;
};
class PoolConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> callbackType{};
  shared_ptr<long> frozenDay{};
  shared_ptr<bool> needAllCallRecords{};
  shared_ptr<bool> openSmsWhite{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> poolWarningLimit{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> selectXMode{};
  shared_ptr<string> smartSmsWhitelist{};
  shared_ptr<string> smsChannel{};

  PoolConfigRequest() {}

  explicit PoolConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (callbackType) {
      res["CallbackType"] = boost::any(*callbackType);
    }
    if (frozenDay) {
      res["FrozenDay"] = boost::any(*frozenDay);
    }
    if (needAllCallRecords) {
      res["NeedAllCallRecords"] = boost::any(*needAllCallRecords);
    }
    if (openSmsWhite) {
      res["OpenSmsWhite"] = boost::any(*openSmsWhite);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolWarningLimit) {
      res["PoolWarningLimit"] = boost::any(*poolWarningLimit);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (selectXMode) {
      res["SelectXMode"] = boost::any(*selectXMode);
    }
    if (smartSmsWhitelist) {
      res["SmartSmsWhitelist"] = boost::any(*smartSmsWhitelist);
    }
    if (smsChannel) {
      res["SmsChannel"] = boost::any(*smsChannel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("CallbackType") != m.end() && !m["CallbackType"].empty()) {
      callbackType = make_shared<long>(boost::any_cast<long>(m["CallbackType"]));
    }
    if (m.find("FrozenDay") != m.end() && !m["FrozenDay"].empty()) {
      frozenDay = make_shared<long>(boost::any_cast<long>(m["FrozenDay"]));
    }
    if (m.find("NeedAllCallRecords") != m.end() && !m["NeedAllCallRecords"].empty()) {
      needAllCallRecords = make_shared<bool>(boost::any_cast<bool>(m["NeedAllCallRecords"]));
    }
    if (m.find("OpenSmsWhite") != m.end() && !m["OpenSmsWhite"].empty()) {
      openSmsWhite = make_shared<bool>(boost::any_cast<bool>(m["OpenSmsWhite"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolWarningLimit") != m.end() && !m["PoolWarningLimit"].empty()) {
      poolWarningLimit = make_shared<long>(boost::any_cast<long>(m["PoolWarningLimit"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SelectXMode") != m.end() && !m["SelectXMode"].empty()) {
      selectXMode = make_shared<string>(boost::any_cast<string>(m["SelectXMode"]));
    }
    if (m.find("SmartSmsWhitelist") != m.end() && !m["SmartSmsWhitelist"].empty()) {
      smartSmsWhitelist = make_shared<string>(boost::any_cast<string>(m["SmartSmsWhitelist"]));
    }
    if (m.find("SmsChannel") != m.end() && !m["SmsChannel"].empty()) {
      smsChannel = make_shared<string>(boost::any_cast<string>(m["SmsChannel"]));
    }
  }


  virtual ~PoolConfigRequest() = default;
};
class PoolConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  PoolConfigResponseBody() {}

  explicit PoolConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~PoolConfigResponseBody() = default;
};
class PoolConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PoolConfigResponseBody> body{};

  PoolConfigResponse() {}

  explicit PoolConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PoolConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PoolConfigResponseBody>(model1);
      }
    }
  }


  virtual ~PoolConfigResponse() = default;
};
class PurchaseResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> buyNumber{};
  shared_ptr<bool> isDisplayPool{};
  shared_ptr<string> noLike{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> regionName{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> specId{};
  shared_ptr<string> usageScenarios{};

  PurchaseResourcesRequest() {}

  explicit PurchaseResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (buyNumber) {
      res["BuyNumber"] = boost::any(*buyNumber);
    }
    if (isDisplayPool) {
      res["IsDisplayPool"] = boost::any(*isDisplayPool);
    }
    if (noLike) {
      res["NoLike"] = boost::any(*noLike);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    if (usageScenarios) {
      res["UsageScenarios"] = boost::any(*usageScenarios);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("BuyNumber") != m.end() && !m["BuyNumber"].empty()) {
      buyNumber = make_shared<long>(boost::any_cast<long>(m["BuyNumber"]));
    }
    if (m.find("IsDisplayPool") != m.end() && !m["IsDisplayPool"].empty()) {
      isDisplayPool = make_shared<bool>(boost::any_cast<bool>(m["IsDisplayPool"]));
    }
    if (m.find("NoLike") != m.end() && !m["NoLike"].empty()) {
      noLike = make_shared<string>(boost::any_cast<string>(m["NoLike"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<long>(boost::any_cast<long>(m["SpecId"]));
    }
    if (m.find("UsageScenarios") != m.end() && !m["UsageScenarios"].empty()) {
      usageScenarios = make_shared<string>(boost::any_cast<string>(m["UsageScenarios"]));
    }
  }


  virtual ~PurchaseResourcesRequest() = default;
};
class PurchaseResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  PurchaseResourcesResponseBody() {}

  explicit PurchaseResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~PurchaseResourcesResponseBody() = default;
};
class PurchaseResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PurchaseResourcesResponseBody> body{};

  PurchaseResourcesResponse() {}

  explicit PurchaseResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PurchaseResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PurchaseResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~PurchaseResourcesResponse() = default;
};
class QueryBindingDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};
  shared_ptr<string> subId{};

  QueryBindingDetailsRequest() {}

  explicit QueryBindingDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    if (subId) {
      res["SubId"] = boost::any(*subId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
    if (m.find("SubId") != m.end() && !m["SubId"].empty()) {
      subId = make_shared<string>(boost::any_cast<string>(m["SubId"]));
    }
  }


  virtual ~QueryBindingDetailsRequest() = default;
};
class QueryBindingDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryBindingDetailsResponseBody() {}

  explicit QueryBindingDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryBindingDetailsResponseBody() = default;
};
class QueryBindingDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBindingDetailsResponseBody> body{};

  QueryBindingDetailsResponse() {}

  explicit QueryBindingDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBindingDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBindingDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBindingDetailsResponse() = default;
};
class QueryBlackListRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> blackPrefix{};
  shared_ptr<string> blackType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryBlackListRequest() {}

  explicit QueryBlackListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (blackPrefix) {
      res["BlackPrefix"] = boost::any(*blackPrefix);
    }
    if (blackType) {
      res["BlackType"] = boost::any(*blackType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("BlackPrefix") != m.end() && !m["BlackPrefix"].empty()) {
      blackPrefix = make_shared<string>(boost::any_cast<string>(m["BlackPrefix"]));
    }
    if (m.find("BlackType") != m.end() && !m["BlackType"].empty()) {
      blackType = make_shared<string>(boost::any_cast<string>(m["BlackType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryBlackListRequest() = default;
};
class QueryBlackListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};

  QueryBlackListResponseBody() {}

  explicit QueryBlackListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~QueryBlackListResponseBody() = default;
};
class QueryBlackListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBlackListResponseBody> body{};

  QueryBlackListResponse() {}

  explicit QueryBlackListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBlackListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBlackListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBlackListResponse() = default;
};
class QueryBuyPageInitDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryBuyPageInitDataRequest() {}

  explicit QueryBuyPageInitDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryBuyPageInitDataRequest() = default;
};
class QueryBuyPageInitDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryBuyPageInitDataResponseBody() {}

  explicit QueryBuyPageInitDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryBuyPageInitDataResponseBody() = default;
};
class QueryBuyPageInitDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBuyPageInitDataResponseBody> body{};

  QueryBuyPageInitDataResponse() {}

  explicit QueryBuyPageInitDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBuyPageInitDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBuyPageInitDataResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBuyPageInitDataResponse() = default;
};
class QueryBuyPageResCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> city{};
  shared_ptr<string> like{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> specId{};

  QueryBuyPageResCountRequest() {}

  explicit QueryBuyPageResCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (like) {
      res["Like"] = boost::any(*like);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Like") != m.end() && !m["Like"].empty()) {
      like = make_shared<string>(boost::any_cast<string>(m["Like"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<long>(boost::any_cast<long>(m["SpecId"]));
    }
  }


  virtual ~QueryBuyPageResCountRequest() = default;
};
class QueryBuyPageResCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryBuyPageResCountResponseBody() {}

  explicit QueryBuyPageResCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryBuyPageResCountResponseBody() = default;
};
class QueryBuyPageResCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBuyPageResCountResponseBody> body{};

  QueryBuyPageResCountResponse() {}

  explicit QueryBuyPageResCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBuyPageResCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBuyPageResCountResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBuyPageResCountResponse() = default;
};
class QueryBuyPageResInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> like{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> specId{};

  QueryBuyPageResInfoRequest() {}

  explicit QueryBuyPageResInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (like) {
      res["Like"] = boost::any(*like);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Like") != m.end() && !m["Like"].empty()) {
      like = make_shared<string>(boost::any_cast<string>(m["Like"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<long>(boost::any_cast<long>(m["SpecId"]));
    }
  }


  virtual ~QueryBuyPageResInfoRequest() = default;
};
class QueryBuyPageResInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryBuyPageResInfoResponseBody() {}

  explicit QueryBuyPageResInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryBuyPageResInfoResponseBody() = default;
};
class QueryBuyPageResInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBuyPageResInfoResponseBody> body{};

  QueryBuyPageResInfoResponse() {}

  explicit QueryBuyPageResInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBuyPageResInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBuyPageResInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBuyPageResInfoResponse() = default;
};
class QueryBuyResInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> like{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> specId{};

  QueryBuyResInfoRequest() {}

  explicit QueryBuyResInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (like) {
      res["Like"] = boost::any(*like);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Like") != m.end() && !m["Like"].empty()) {
      like = make_shared<string>(boost::any_cast<string>(m["Like"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<long>(boost::any_cast<long>(m["SpecId"]));
    }
  }


  virtual ~QueryBuyResInfoRequest() = default;
};
class QueryBuyResInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryBuyResInfoResponseBody() {}

  explicit QueryBuyResInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryBuyResInfoResponseBody() = default;
};
class QueryBuyResInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryBuyResInfoResponseBody> body{};

  QueryBuyResInfoResponse() {}

  explicit QueryBuyResInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBuyResInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBuyResInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBuyResInfoResponse() = default;
};
class QueryCallRecordingListRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> callDate{};
  shared_ptr<string> callId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  QueryCallRecordingListRequest() {}

  explicit QueryCallRecordingListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (callDate) {
      res["CallDate"] = boost::any(*callDate);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("CallDate") != m.end() && !m["CallDate"].empty()) {
      callDate = make_shared<string>(boost::any_cast<string>(m["CallDate"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~QueryCallRecordingListRequest() = default;
};
class QueryCallRecordingListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryCallRecordingListResponseBody() {}

  explicit QueryCallRecordingListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryCallRecordingListResponseBody() = default;
};
class QueryCallRecordingListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCallRecordingListResponseBody> body{};

  QueryCallRecordingListResponse() {}

  explicit QueryCallRecordingListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryCallRecordingListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCallRecordingListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCallRecordingListResponse() = default;
};
class QueryCertifyInfoListRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyStatus{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> phoneNo{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryCertifyInfoListRequest() {}

  explicit QueryCertifyInfoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyStatus) {
      res["CertifyStatus"] = boost::any(*certifyStatus);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (phoneNo) {
      res["PhoneNo"] = boost::any(*phoneNo);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyStatus") != m.end() && !m["CertifyStatus"].empty()) {
      certifyStatus = make_shared<string>(boost::any_cast<string>(m["CertifyStatus"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PhoneNo") != m.end() && !m["PhoneNo"].empty()) {
      phoneNo = make_shared<string>(boost::any_cast<string>(m["PhoneNo"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryCertifyInfoListRequest() = default;
};
class QueryCertifyInfoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryCertifyInfoListResponseBody() {}

  explicit QueryCertifyInfoListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryCertifyInfoListResponseBody() = default;
};
class QueryCertifyInfoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCertifyInfoListResponseBody> body{};

  QueryCertifyInfoListResponse() {}

  explicit QueryCertifyInfoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryCertifyInfoListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCertifyInfoListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCertifyInfoListResponse() = default;
};
class QueryCertifyOverviewInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryCertifyOverviewInfoRequest() {}

  explicit QueryCertifyOverviewInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryCertifyOverviewInfoRequest() = default;
};
class QueryCertifyOverviewInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryCertifyOverviewInfoResponseBody() {}

  explicit QueryCertifyOverviewInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryCertifyOverviewInfoResponseBody() = default;
};
class QueryCertifyOverviewInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCertifyOverviewInfoResponseBody> body{};

  QueryCertifyOverviewInfoResponse() {}

  explicit QueryCertifyOverviewInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryCertifyOverviewInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCertifyOverviewInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCertifyOverviewInfoResponse() = default;
};
class QueryContactsListRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryContactsListRequest() {}

  explicit QueryContactsListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryContactsListRequest() = default;
};
class QueryContactsListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryContactsListResponseBody() {}

  explicit QueryContactsListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryContactsListResponseBody() = default;
};
class QueryContactsListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryContactsListResponseBody> body{};

  QueryContactsListResponse() {}

  explicit QueryContactsListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryContactsListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryContactsListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryContactsListResponse() = default;
};
class QueryCustInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryCustInfoRequest() {}

  explicit QueryCustInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryCustInfoRequest() = default;
};
class QueryCustInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> certifyType{};
  shared_ptr<string> contactPhone{};
  shared_ptr<long> custId{};
  shared_ptr<string> custName{};
  shared_ptr<bool> isDayuCustomer{};
  shared_ptr<long> osStatus{};
  shared_ptr<long> partnerId{};
  shared_ptr<long> userTag{};
  shared_ptr<long> userTag2{};

  QueryCustInfoResponseBodyData() {}

  explicit QueryCustInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyType) {
      res["CertifyType"] = boost::any(*certifyType);
    }
    if (contactPhone) {
      res["ContactPhone"] = boost::any(*contactPhone);
    }
    if (custId) {
      res["CustId"] = boost::any(*custId);
    }
    if (custName) {
      res["CustName"] = boost::any(*custName);
    }
    if (isDayuCustomer) {
      res["IsDayuCustomer"] = boost::any(*isDayuCustomer);
    }
    if (osStatus) {
      res["OsStatus"] = boost::any(*osStatus);
    }
    if (partnerId) {
      res["PartnerId"] = boost::any(*partnerId);
    }
    if (userTag) {
      res["UserTag"] = boost::any(*userTag);
    }
    if (userTag2) {
      res["UserTag2"] = boost::any(*userTag2);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyType") != m.end() && !m["CertifyType"].empty()) {
      certifyType = make_shared<long>(boost::any_cast<long>(m["CertifyType"]));
    }
    if (m.find("ContactPhone") != m.end() && !m["ContactPhone"].empty()) {
      contactPhone = make_shared<string>(boost::any_cast<string>(m["ContactPhone"]));
    }
    if (m.find("CustId") != m.end() && !m["CustId"].empty()) {
      custId = make_shared<long>(boost::any_cast<long>(m["CustId"]));
    }
    if (m.find("CustName") != m.end() && !m["CustName"].empty()) {
      custName = make_shared<string>(boost::any_cast<string>(m["CustName"]));
    }
    if (m.find("IsDayuCustomer") != m.end() && !m["IsDayuCustomer"].empty()) {
      isDayuCustomer = make_shared<bool>(boost::any_cast<bool>(m["IsDayuCustomer"]));
    }
    if (m.find("OsStatus") != m.end() && !m["OsStatus"].empty()) {
      osStatus = make_shared<long>(boost::any_cast<long>(m["OsStatus"]));
    }
    if (m.find("PartnerId") != m.end() && !m["PartnerId"].empty()) {
      partnerId = make_shared<long>(boost::any_cast<long>(m["PartnerId"]));
    }
    if (m.find("UserTag") != m.end() && !m["UserTag"].empty()) {
      userTag = make_shared<long>(boost::any_cast<long>(m["UserTag"]));
    }
    if (m.find("UserTag2") != m.end() && !m["UserTag2"].empty()) {
      userTag2 = make_shared<long>(boost::any_cast<long>(m["UserTag2"]));
    }
  }


  virtual ~QueryCustInfoResponseBodyData() = default;
};
class QueryCustInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<QueryCustInfoResponseBodyData> data{};

  QueryCustInfoResponseBody() {}

  explicit QueryCustInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryCustInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryCustInfoResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryCustInfoResponseBody() = default;
};
class QueryCustInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCustInfoResponseBody> body{};

  QueryCustInfoResponse() {}

  explicit QueryCustInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryCustInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCustInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCustInfoResponse() = default;
};
class QueryDownloadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryDownloadUrlRequest() {}

  explicit QueryDownloadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryDownloadUrlRequest() = default;
};
class QueryDownloadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryDownloadUrlResponseBody() {}

  explicit QueryDownloadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryDownloadUrlResponseBody() = default;
};
class QueryDownloadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDownloadUrlResponseBody> body{};

  QueryDownloadUrlResponse() {}

  explicit QueryDownloadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDownloadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDownloadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDownloadUrlResponse() = default;
};
class QueryEffectiveInvoiceListByBillNosRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> billNo{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> language{};
  shared_ptr<string> majorBillNo{};
  shared_ptr<string> ouCode{};
  shared_ptr<string> relatedSystem{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  QueryEffectiveInvoiceListByBillNosRequest() {}

  explicit QueryEffectiveInvoiceListByBillNosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (billNo) {
      res["BillNo"] = boost::any(*billNo);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (majorBillNo) {
      res["MajorBillNo"] = boost::any(*majorBillNo);
    }
    if (ouCode) {
      res["OuCode"] = boost::any(*ouCode);
    }
    if (relatedSystem) {
      res["RelatedSystem"] = boost::any(*relatedSystem);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("BillNo") != m.end() && !m["BillNo"].empty()) {
      billNo = make_shared<string>(boost::any_cast<string>(m["BillNo"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MajorBillNo") != m.end() && !m["MajorBillNo"].empty()) {
      majorBillNo = make_shared<string>(boost::any_cast<string>(m["MajorBillNo"]));
    }
    if (m.find("OuCode") != m.end() && !m["OuCode"].empty()) {
      ouCode = make_shared<string>(boost::any_cast<string>(m["OuCode"]));
    }
    if (m.find("RelatedSystem") != m.end() && !m["RelatedSystem"].empty()) {
      relatedSystem = make_shared<string>(boost::any_cast<string>(m["RelatedSystem"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~QueryEffectiveInvoiceListByBillNosRequest() = default;
};
class QueryEffectiveInvoiceListByBillNosResponseBodyReturnValueList : public Darabonba::Model {
public:
  shared_ptr<string> aliCompany{};
  shared_ptr<long> aliId{};
  shared_ptr<double> amount{};
  shared_ptr<string> appCode{};
  shared_ptr<double> buildAmount{};
  shared_ptr<string> category{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<string> invoiceStatus{};
  shared_ptr<string> invoiceTitle{};
  shared_ptr<string> language{};
  shared_ptr<string> orderItemNo{};
  shared_ptr<string> parentContractNo{};
  shared_ptr<string> sign{};
  shared_ptr<string> site{};
  shared_ptr<string> taxRegisgerNo{};
  shared_ptr<string> uuid{};

  QueryEffectiveInvoiceListByBillNosResponseBodyReturnValueList() {}

  explicit QueryEffectiveInvoiceListByBillNosResponseBodyReturnValueList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliCompany) {
      res["AliCompany"] = boost::any(*aliCompany);
    }
    if (aliId) {
      res["AliId"] = boost::any(*aliId);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (buildAmount) {
      res["BuildAmount"] = boost::any(*buildAmount);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (invoiceStatus) {
      res["InvoiceStatus"] = boost::any(*invoiceStatus);
    }
    if (invoiceTitle) {
      res["InvoiceTitle"] = boost::any(*invoiceTitle);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (orderItemNo) {
      res["OrderItemNo"] = boost::any(*orderItemNo);
    }
    if (parentContractNo) {
      res["ParentContractNo"] = boost::any(*parentContractNo);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (taxRegisgerNo) {
      res["TaxRegisgerNo"] = boost::any(*taxRegisgerNo);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliCompany") != m.end() && !m["AliCompany"].empty()) {
      aliCompany = make_shared<string>(boost::any_cast<string>(m["AliCompany"]));
    }
    if (m.find("AliId") != m.end() && !m["AliId"].empty()) {
      aliId = make_shared<long>(boost::any_cast<long>(m["AliId"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("BuildAmount") != m.end() && !m["BuildAmount"].empty()) {
      buildAmount = make_shared<double>(boost::any_cast<double>(m["BuildAmount"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("InvoiceStatus") != m.end() && !m["InvoiceStatus"].empty()) {
      invoiceStatus = make_shared<string>(boost::any_cast<string>(m["InvoiceStatus"]));
    }
    if (m.find("InvoiceTitle") != m.end() && !m["InvoiceTitle"].empty()) {
      invoiceTitle = make_shared<string>(boost::any_cast<string>(m["InvoiceTitle"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("OrderItemNo") != m.end() && !m["OrderItemNo"].empty()) {
      orderItemNo = make_shared<string>(boost::any_cast<string>(m["OrderItemNo"]));
    }
    if (m.find("ParentContractNo") != m.end() && !m["ParentContractNo"].empty()) {
      parentContractNo = make_shared<string>(boost::any_cast<string>(m["ParentContractNo"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("TaxRegisgerNo") != m.end() && !m["TaxRegisgerNo"].empty()) {
      taxRegisgerNo = make_shared<string>(boost::any_cast<string>(m["TaxRegisgerNo"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~QueryEffectiveInvoiceListByBillNosResponseBodyReturnValueList() = default;
};
class QueryEffectiveInvoiceListByBillNosResponseBodyReturnValue : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<vector<QueryEffectiveInvoiceListByBillNosResponseBodyReturnValueList>> list{};
  shared_ptr<string> sign{};

  QueryEffectiveInvoiceListByBillNosResponseBodyReturnValue() {}

  explicit QueryEffectiveInvoiceListByBillNosResponseBodyReturnValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryEffectiveInvoiceListByBillNosResponseBodyReturnValueList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEffectiveInvoiceListByBillNosResponseBodyReturnValueList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryEffectiveInvoiceListByBillNosResponseBodyReturnValueList>>(expect1);
      }
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
  }


  virtual ~QueryEffectiveInvoiceListByBillNosResponseBodyReturnValue() = default;
};
class QueryEffectiveInvoiceListByBillNosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<QueryEffectiveInvoiceListByBillNosResponseBodyReturnValue> returnValue{};

  QueryEffectiveInvoiceListByBillNosResponseBody() {}

  explicit QueryEffectiveInvoiceListByBillNosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (returnValue) {
      res["ReturnValue"] = returnValue ? boost::any(returnValue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ReturnValue") != m.end() && !m["ReturnValue"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReturnValue"].type()) {
        QueryEffectiveInvoiceListByBillNosResponseBodyReturnValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReturnValue"]));
        returnValue = make_shared<QueryEffectiveInvoiceListByBillNosResponseBodyReturnValue>(model1);
      }
    }
  }


  virtual ~QueryEffectiveInvoiceListByBillNosResponseBody() = default;
};
class QueryEffectiveInvoiceListByBillNosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEffectiveInvoiceListByBillNosResponseBody> body{};

  QueryEffectiveInvoiceListByBillNosResponse() {}

  explicit QueryEffectiveInvoiceListByBillNosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryEffectiveInvoiceListByBillNosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEffectiveInvoiceListByBillNosResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEffectiveInvoiceListByBillNosResponse() = default;
};
class QueryExportResUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskId{};

  QueryExportResUrlRequest() {}

  explicit QueryExportResUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~QueryExportResUrlRequest() = default;
};
class QueryExportResUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryExportResUrlResponseBody() {}

  explicit QueryExportResUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryExportResUrlResponseBody() = default;
};
class QueryExportResUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryExportResUrlResponseBody> body{};

  QueryExportResUrlResponse() {}

  explicit QueryExportResUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryExportResUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryExportResUrlResponseBody>(model1);
      }
    }
  }


  virtual ~QueryExportResUrlResponse() = default;
};
class QueryGroupDetailListRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> number{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryGroupDetailListRequest() {}

  explicit QueryGroupDetailListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryGroupDetailListRequest() = default;
};
class QueryGroupDetailListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  QueryGroupDetailListResponseBody() {}

  explicit QueryGroupDetailListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~QueryGroupDetailListResponseBody() = default;
};
class QueryGroupDetailListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryGroupDetailListResponseBody> body{};

  QueryGroupDetailListResponse() {}

  explicit QueryGroupDetailListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryGroupDetailListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryGroupDetailListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryGroupDetailListResponse() = default;
};
class QueryGroupInfoListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> queryKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryGroupInfoListRequest() {}

  explicit QueryGroupInfoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (queryKey) {
      res["QueryKey"] = boost::any(*queryKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("QueryKey") != m.end() && !m["QueryKey"].empty()) {
      queryKey = make_shared<string>(boost::any_cast<string>(m["QueryKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryGroupInfoListRequest() = default;
};
class QueryGroupInfoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  QueryGroupInfoListResponseBody() {}

  explicit QueryGroupInfoListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~QueryGroupInfoListResponseBody() = default;
};
class QueryGroupInfoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryGroupInfoListResponseBody> body{};

  QueryGroupInfoListResponse() {}

  explicit QueryGroupInfoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryGroupInfoListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryGroupInfoListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryGroupInfoListResponse() = default;
};
class QueryInvoiceInfoByRequestNoRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> language{};
  shared_ptr<string> relatedSystem{};
  shared_ptr<string> requestNo{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  QueryInvoiceInfoByRequestNoRequest() {}

  explicit QueryInvoiceInfoByRequestNoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (relatedSystem) {
      res["RelatedSystem"] = boost::any(*relatedSystem);
    }
    if (requestNo) {
      res["RequestNo"] = boost::any(*requestNo);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("RelatedSystem") != m.end() && !m["RelatedSystem"].empty()) {
      relatedSystem = make_shared<string>(boost::any_cast<string>(m["RelatedSystem"]));
    }
    if (m.find("RequestNo") != m.end() && !m["RequestNo"].empty()) {
      requestNo = make_shared<string>(boost::any_cast<string>(m["RequestNo"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoRequest() = default;
};
class QueryInvoiceInfoByRequestNoResponseBodyReturnValueListCustomer : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerSite{};
  shared_ptr<string> customerSystem{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> language{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  QueryInvoiceInfoByRequestNoResponseBodyReturnValueListCustomer() {}

  explicit QueryInvoiceInfoByRequestNoResponseBodyReturnValueListCustomer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (customerSite) {
      res["CustomerSite"] = boost::any(*customerSite);
    }
    if (customerSystem) {
      res["CustomerSystem"] = boost::any(*customerSystem);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("CustomerSite") != m.end() && !m["CustomerSite"].empty()) {
      customerSite = make_shared<string>(boost::any_cast<string>(m["CustomerSite"]));
    }
    if (m.find("CustomerSystem") != m.end() && !m["CustomerSystem"].empty()) {
      customerSystem = make_shared<string>(boost::any_cast<string>(m["CustomerSystem"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoResponseBodyReturnValueListCustomer() = default;
};
class QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceListCustomer : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerSite{};
  shared_ptr<string> customerSystem{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> language{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceListCustomer() {}

  explicit QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceListCustomer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (customerSite) {
      res["CustomerSite"] = boost::any(*customerSite);
    }
    if (customerSystem) {
      res["CustomerSystem"] = boost::any(*customerSystem);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("CustomerSite") != m.end() && !m["CustomerSite"].empty()) {
      customerSite = make_shared<string>(boost::any_cast<string>(m["CustomerSite"]));
    }
    if (m.find("CustomerSystem") != m.end() && !m["CustomerSystem"].empty()) {
      customerSystem = make_shared<string>(boost::any_cast<string>(m["CustomerSystem"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceListCustomer() = default;
};
class QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceList : public Darabonba::Model {
public:
  shared_ptr<double> amount{};
  shared_ptr<string> appCode{};
  shared_ptr<double> billAmount{};
  shared_ptr<string> billDomain{};
  shared_ptr<string> billNo{};
  shared_ptr<string> billType{};
  shared_ptr<long> blueSourceId{};
  shared_ptr<bool> canMerge{};
  shared_ptr<string> cargoName{};
  shared_ptr<string> category{};
  shared_ptr<string> companyName{};
  shared_ptr<string> currencyCode{};
  shared_ptr<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceListCustomer> customer{};
  shared_ptr<double> discountAmount{};
  shared_ptr<double> discountTaxAmount{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<double> excludingTaxAmount{};
  shared_ptr<double> excludingTaxDiscountAmount{};
  shared_ptr<double> excludingTaxRedAmount{};
  shared_ptr<double> excludingTaxRemainAmount{};
  shared_ptr<string> gmtBill{};
  shared_ptr<string> gmtBillEnd{};
  shared_ptr<string> gmtBillStart{};
  shared_ptr<string> gmtBuild{};
  shared_ptr<string> isApply{};
  shared_ptr<string> language{};
  shared_ptr<string> majorBillNo{};
  shared_ptr<string> model{};
  shared_ptr<string> ouCode{};
  shared_ptr<string> parentCategory{};
  shared_ptr<string> productDomain{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<double> quantity{};
  shared_ptr<string> quantityUnit{};
  shared_ptr<double> redAmount{};
  shared_ptr<string> relatedId{};
  shared_ptr<double> remainAmount{};
  shared_ptr<string> revenueType{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> sign{};
  shared_ptr<string> siteId{};
  shared_ptr<long> sourceId{};
  shared_ptr<double> taxAmount{};
  shared_ptr<double> taxRate{};
  shared_ptr<double> unitPrice{};
  shared_ptr<string> uuid{};

  QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceList() {}

  explicit QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (billAmount) {
      res["BillAmount"] = boost::any(*billAmount);
    }
    if (billDomain) {
      res["BillDomain"] = boost::any(*billDomain);
    }
    if (billNo) {
      res["BillNo"] = boost::any(*billNo);
    }
    if (billType) {
      res["BillType"] = boost::any(*billType);
    }
    if (blueSourceId) {
      res["BlueSourceId"] = boost::any(*blueSourceId);
    }
    if (canMerge) {
      res["CanMerge"] = boost::any(*canMerge);
    }
    if (cargoName) {
      res["CargoName"] = boost::any(*cargoName);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (currencyCode) {
      res["CurrencyCode"] = boost::any(*currencyCode);
    }
    if (customer) {
      res["Customer"] = customer ? boost::any(customer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (discountTaxAmount) {
      res["DiscountTaxAmount"] = boost::any(*discountTaxAmount);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (excludingTaxAmount) {
      res["ExcludingTaxAmount"] = boost::any(*excludingTaxAmount);
    }
    if (excludingTaxDiscountAmount) {
      res["ExcludingTaxDiscountAmount"] = boost::any(*excludingTaxDiscountAmount);
    }
    if (excludingTaxRedAmount) {
      res["ExcludingTaxRedAmount"] = boost::any(*excludingTaxRedAmount);
    }
    if (excludingTaxRemainAmount) {
      res["ExcludingTaxRemainAmount"] = boost::any(*excludingTaxRemainAmount);
    }
    if (gmtBill) {
      res["GmtBill"] = boost::any(*gmtBill);
    }
    if (gmtBillEnd) {
      res["GmtBillEnd"] = boost::any(*gmtBillEnd);
    }
    if (gmtBillStart) {
      res["GmtBillStart"] = boost::any(*gmtBillStart);
    }
    if (gmtBuild) {
      res["GmtBuild"] = boost::any(*gmtBuild);
    }
    if (isApply) {
      res["IsApply"] = boost::any(*isApply);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (majorBillNo) {
      res["MajorBillNo"] = boost::any(*majorBillNo);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (ouCode) {
      res["OuCode"] = boost::any(*ouCode);
    }
    if (parentCategory) {
      res["ParentCategory"] = boost::any(*parentCategory);
    }
    if (productDomain) {
      res["ProductDomain"] = boost::any(*productDomain);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (quantityUnit) {
      res["QuantityUnit"] = boost::any(*quantityUnit);
    }
    if (redAmount) {
      res["RedAmount"] = boost::any(*redAmount);
    }
    if (relatedId) {
      res["RelatedId"] = boost::any(*relatedId);
    }
    if (remainAmount) {
      res["RemainAmount"] = boost::any(*remainAmount);
    }
    if (revenueType) {
      res["RevenueType"] = boost::any(*revenueType);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (siteId) {
      res["SiteId"] = boost::any(*siteId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (taxAmount) {
      res["TaxAmount"] = boost::any(*taxAmount);
    }
    if (taxRate) {
      res["TaxRate"] = boost::any(*taxRate);
    }
    if (unitPrice) {
      res["UnitPrice"] = boost::any(*unitPrice);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("BillAmount") != m.end() && !m["BillAmount"].empty()) {
      billAmount = make_shared<double>(boost::any_cast<double>(m["BillAmount"]));
    }
    if (m.find("BillDomain") != m.end() && !m["BillDomain"].empty()) {
      billDomain = make_shared<string>(boost::any_cast<string>(m["BillDomain"]));
    }
    if (m.find("BillNo") != m.end() && !m["BillNo"].empty()) {
      billNo = make_shared<string>(boost::any_cast<string>(m["BillNo"]));
    }
    if (m.find("BillType") != m.end() && !m["BillType"].empty()) {
      billType = make_shared<string>(boost::any_cast<string>(m["BillType"]));
    }
    if (m.find("BlueSourceId") != m.end() && !m["BlueSourceId"].empty()) {
      blueSourceId = make_shared<long>(boost::any_cast<long>(m["BlueSourceId"]));
    }
    if (m.find("CanMerge") != m.end() && !m["CanMerge"].empty()) {
      canMerge = make_shared<bool>(boost::any_cast<bool>(m["CanMerge"]));
    }
    if (m.find("CargoName") != m.end() && !m["CargoName"].empty()) {
      cargoName = make_shared<string>(boost::any_cast<string>(m["CargoName"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("CurrencyCode") != m.end() && !m["CurrencyCode"].empty()) {
      currencyCode = make_shared<string>(boost::any_cast<string>(m["CurrencyCode"]));
    }
    if (m.find("Customer") != m.end() && !m["Customer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Customer"].type()) {
        QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceListCustomer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Customer"]));
        customer = make_shared<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceListCustomer>(model1);
      }
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("DiscountTaxAmount") != m.end() && !m["DiscountTaxAmount"].empty()) {
      discountTaxAmount = make_shared<double>(boost::any_cast<double>(m["DiscountTaxAmount"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ExcludingTaxAmount") != m.end() && !m["ExcludingTaxAmount"].empty()) {
      excludingTaxAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxAmount"]));
    }
    if (m.find("ExcludingTaxDiscountAmount") != m.end() && !m["ExcludingTaxDiscountAmount"].empty()) {
      excludingTaxDiscountAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxDiscountAmount"]));
    }
    if (m.find("ExcludingTaxRedAmount") != m.end() && !m["ExcludingTaxRedAmount"].empty()) {
      excludingTaxRedAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxRedAmount"]));
    }
    if (m.find("ExcludingTaxRemainAmount") != m.end() && !m["ExcludingTaxRemainAmount"].empty()) {
      excludingTaxRemainAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxRemainAmount"]));
    }
    if (m.find("GmtBill") != m.end() && !m["GmtBill"].empty()) {
      gmtBill = make_shared<string>(boost::any_cast<string>(m["GmtBill"]));
    }
    if (m.find("GmtBillEnd") != m.end() && !m["GmtBillEnd"].empty()) {
      gmtBillEnd = make_shared<string>(boost::any_cast<string>(m["GmtBillEnd"]));
    }
    if (m.find("GmtBillStart") != m.end() && !m["GmtBillStart"].empty()) {
      gmtBillStart = make_shared<string>(boost::any_cast<string>(m["GmtBillStart"]));
    }
    if (m.find("GmtBuild") != m.end() && !m["GmtBuild"].empty()) {
      gmtBuild = make_shared<string>(boost::any_cast<string>(m["GmtBuild"]));
    }
    if (m.find("IsApply") != m.end() && !m["IsApply"].empty()) {
      isApply = make_shared<string>(boost::any_cast<string>(m["IsApply"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MajorBillNo") != m.end() && !m["MajorBillNo"].empty()) {
      majorBillNo = make_shared<string>(boost::any_cast<string>(m["MajorBillNo"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OuCode") != m.end() && !m["OuCode"].empty()) {
      ouCode = make_shared<string>(boost::any_cast<string>(m["OuCode"]));
    }
    if (m.find("ParentCategory") != m.end() && !m["ParentCategory"].empty()) {
      parentCategory = make_shared<string>(boost::any_cast<string>(m["ParentCategory"]));
    }
    if (m.find("ProductDomain") != m.end() && !m["ProductDomain"].empty()) {
      productDomain = make_shared<string>(boost::any_cast<string>(m["ProductDomain"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<double>(boost::any_cast<double>(m["Quantity"]));
    }
    if (m.find("QuantityUnit") != m.end() && !m["QuantityUnit"].empty()) {
      quantityUnit = make_shared<string>(boost::any_cast<string>(m["QuantityUnit"]));
    }
    if (m.find("RedAmount") != m.end() && !m["RedAmount"].empty()) {
      redAmount = make_shared<double>(boost::any_cast<double>(m["RedAmount"]));
    }
    if (m.find("RelatedId") != m.end() && !m["RelatedId"].empty()) {
      relatedId = make_shared<string>(boost::any_cast<string>(m["RelatedId"]));
    }
    if (m.find("RemainAmount") != m.end() && !m["RemainAmount"].empty()) {
      remainAmount = make_shared<double>(boost::any_cast<double>(m["RemainAmount"]));
    }
    if (m.find("RevenueType") != m.end() && !m["RevenueType"].empty()) {
      revenueType = make_shared<string>(boost::any_cast<string>(m["RevenueType"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("SiteId") != m.end() && !m["SiteId"].empty()) {
      siteId = make_shared<string>(boost::any_cast<string>(m["SiteId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["SourceId"]));
    }
    if (m.find("TaxAmount") != m.end() && !m["TaxAmount"].empty()) {
      taxAmount = make_shared<double>(boost::any_cast<double>(m["TaxAmount"]));
    }
    if (m.find("TaxRate") != m.end() && !m["TaxRate"].empty()) {
      taxRate = make_shared<double>(boost::any_cast<double>(m["TaxRate"]));
    }
    if (m.find("UnitPrice") != m.end() && !m["UnitPrice"].empty()) {
      unitPrice = make_shared<double>(boost::any_cast<double>(m["UnitPrice"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceList() = default;
};
class QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailList : public Darabonba::Model {
public:
  shared_ptr<double> amount{};
  shared_ptr<string> appCode{};
  shared_ptr<string> cargoName{};
  shared_ptr<double> discountAmount{};
  shared_ptr<double> discountTaxAmount{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<double> excludingTaxAmount{};
  shared_ptr<double> excludingTaxDiscountAmount{};
  shared_ptr<double> excludingTaxRedAmount{};
  shared_ptr<double> excludingTaxRemainAmount{};
  shared_ptr<double> excludingTaxUnitPrice{};
  shared_ptr<long> invoiceDetailId{};
  shared_ptr<string> language{};
  shared_ptr<string> model{};
  shared_ptr<double> quantity{};
  shared_ptr<string> quantityUnit{};
  shared_ptr<double> redAmount{};
  shared_ptr<string> relatedId{};
  shared_ptr<double> remainAmount{};
  shared_ptr<string> sign{};
  shared_ptr<vector<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceList>> sourceList{};
  shared_ptr<double> taxAmount{};
  shared_ptr<double> taxRate{};
  shared_ptr<double> unitPrice{};
  shared_ptr<string> uuid{};

  QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailList() {}

  explicit QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (cargoName) {
      res["CargoName"] = boost::any(*cargoName);
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (discountTaxAmount) {
      res["DiscountTaxAmount"] = boost::any(*discountTaxAmount);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (excludingTaxAmount) {
      res["ExcludingTaxAmount"] = boost::any(*excludingTaxAmount);
    }
    if (excludingTaxDiscountAmount) {
      res["ExcludingTaxDiscountAmount"] = boost::any(*excludingTaxDiscountAmount);
    }
    if (excludingTaxRedAmount) {
      res["ExcludingTaxRedAmount"] = boost::any(*excludingTaxRedAmount);
    }
    if (excludingTaxRemainAmount) {
      res["ExcludingTaxRemainAmount"] = boost::any(*excludingTaxRemainAmount);
    }
    if (excludingTaxUnitPrice) {
      res["ExcludingTaxUnitPrice"] = boost::any(*excludingTaxUnitPrice);
    }
    if (invoiceDetailId) {
      res["InvoiceDetailId"] = boost::any(*invoiceDetailId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (quantityUnit) {
      res["QuantityUnit"] = boost::any(*quantityUnit);
    }
    if (redAmount) {
      res["RedAmount"] = boost::any(*redAmount);
    }
    if (relatedId) {
      res["RelatedId"] = boost::any(*relatedId);
    }
    if (remainAmount) {
      res["RemainAmount"] = boost::any(*remainAmount);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (sourceList) {
      vector<boost::any> temp1;
      for(auto item1:*sourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceList"] = boost::any(temp1);
    }
    if (taxAmount) {
      res["TaxAmount"] = boost::any(*taxAmount);
    }
    if (taxRate) {
      res["TaxRate"] = boost::any(*taxRate);
    }
    if (unitPrice) {
      res["UnitPrice"] = boost::any(*unitPrice);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("CargoName") != m.end() && !m["CargoName"].empty()) {
      cargoName = make_shared<string>(boost::any_cast<string>(m["CargoName"]));
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("DiscountTaxAmount") != m.end() && !m["DiscountTaxAmount"].empty()) {
      discountTaxAmount = make_shared<double>(boost::any_cast<double>(m["DiscountTaxAmount"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ExcludingTaxAmount") != m.end() && !m["ExcludingTaxAmount"].empty()) {
      excludingTaxAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxAmount"]));
    }
    if (m.find("ExcludingTaxDiscountAmount") != m.end() && !m["ExcludingTaxDiscountAmount"].empty()) {
      excludingTaxDiscountAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxDiscountAmount"]));
    }
    if (m.find("ExcludingTaxRedAmount") != m.end() && !m["ExcludingTaxRedAmount"].empty()) {
      excludingTaxRedAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxRedAmount"]));
    }
    if (m.find("ExcludingTaxRemainAmount") != m.end() && !m["ExcludingTaxRemainAmount"].empty()) {
      excludingTaxRemainAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxRemainAmount"]));
    }
    if (m.find("ExcludingTaxUnitPrice") != m.end() && !m["ExcludingTaxUnitPrice"].empty()) {
      excludingTaxUnitPrice = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxUnitPrice"]));
    }
    if (m.find("InvoiceDetailId") != m.end() && !m["InvoiceDetailId"].empty()) {
      invoiceDetailId = make_shared<long>(boost::any_cast<long>(m["InvoiceDetailId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<double>(boost::any_cast<double>(m["Quantity"]));
    }
    if (m.find("QuantityUnit") != m.end() && !m["QuantityUnit"].empty()) {
      quantityUnit = make_shared<string>(boost::any_cast<string>(m["QuantityUnit"]));
    }
    if (m.find("RedAmount") != m.end() && !m["RedAmount"].empty()) {
      redAmount = make_shared<double>(boost::any_cast<double>(m["RedAmount"]));
    }
    if (m.find("RelatedId") != m.end() && !m["RelatedId"].empty()) {
      relatedId = make_shared<string>(boost::any_cast<string>(m["RelatedId"]));
    }
    if (m.find("RemainAmount") != m.end() && !m["RemainAmount"].empty()) {
      remainAmount = make_shared<double>(boost::any_cast<double>(m["RemainAmount"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("SourceList") != m.end() && !m["SourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceList"].type()) {
        vector<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceList = make_shared<vector<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailListSourceList>>(expect1);
      }
    }
    if (m.find("TaxAmount") != m.end() && !m["TaxAmount"].empty()) {
      taxAmount = make_shared<double>(boost::any_cast<double>(m["TaxAmount"]));
    }
    if (m.find("TaxRate") != m.end() && !m["TaxRate"].empty()) {
      taxRate = make_shared<double>(boost::any_cast<double>(m["TaxRate"]));
    }
    if (m.find("UnitPrice") != m.end() && !m["UnitPrice"].empty()) {
      unitPrice = make_shared<double>(boost::any_cast<double>(m["UnitPrice"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailList() = default;
};
class QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfoCustomer : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> customerId{};
  shared_ptr<string> customerSite{};
  shared_ptr<string> customerSystem{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> language{};
  shared_ptr<string> sign{};
  shared_ptr<string> uuid{};

  QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfoCustomer() {}

  explicit QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfoCustomer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (customerSite) {
      res["CustomerSite"] = boost::any(*customerSite);
    }
    if (customerSystem) {
      res["CustomerSystem"] = boost::any(*customerSystem);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("CustomerSite") != m.end() && !m["CustomerSite"].empty()) {
      customerSite = make_shared<string>(boost::any_cast<string>(m["CustomerSite"]));
    }
    if (m.find("CustomerSystem") != m.end() && !m["CustomerSystem"].empty()) {
      customerSystem = make_shared<string>(boost::any_cast<string>(m["CustomerSystem"]));
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfoCustomer() = default;
};
class QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfo : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfoCustomer> customer{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<string> gmtSend{};
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceDate{};
  shared_ptr<long> invoiceId{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<string> invoiceNos{};
  shared_ptr<string> language{};
  shared_ptr<string> logisticsCompanies{};
  shared_ptr<string> relatedId{};
  shared_ptr<string> sender{};
  shared_ptr<string> sign{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> trackingNumber{};
  shared_ptr<string> uuid{};

  QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfo() {}

  explicit QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (customer) {
      res["Customer"] = customer ? boost::any(customer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (gmtSend) {
      res["GmtSend"] = boost::any(*gmtSend);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceDate) {
      res["InvoiceDate"] = boost::any(*invoiceDate);
    }
    if (invoiceId) {
      res["InvoiceId"] = boost::any(*invoiceId);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (invoiceNos) {
      res["InvoiceNos"] = boost::any(*invoiceNos);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (logisticsCompanies) {
      res["LogisticsCompanies"] = boost::any(*logisticsCompanies);
    }
    if (relatedId) {
      res["RelatedId"] = boost::any(*relatedId);
    }
    if (sender) {
      res["Sender"] = boost::any(*sender);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (trackingNumber) {
      res["TrackingNumber"] = boost::any(*trackingNumber);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("Customer") != m.end() && !m["Customer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Customer"].type()) {
        QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfoCustomer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Customer"]));
        customer = make_shared<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfoCustomer>(model1);
      }
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GmtSend") != m.end() && !m["GmtSend"].empty()) {
      gmtSend = make_shared<string>(boost::any_cast<string>(m["GmtSend"]));
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceDate") != m.end() && !m["InvoiceDate"].empty()) {
      invoiceDate = make_shared<string>(boost::any_cast<string>(m["InvoiceDate"]));
    }
    if (m.find("InvoiceId") != m.end() && !m["InvoiceId"].empty()) {
      invoiceId = make_shared<long>(boost::any_cast<long>(m["InvoiceId"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("InvoiceNos") != m.end() && !m["InvoiceNos"].empty()) {
      invoiceNos = make_shared<string>(boost::any_cast<string>(m["InvoiceNos"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LogisticsCompanies") != m.end() && !m["LogisticsCompanies"].empty()) {
      logisticsCompanies = make_shared<string>(boost::any_cast<string>(m["LogisticsCompanies"]));
    }
    if (m.find("RelatedId") != m.end() && !m["RelatedId"].empty()) {
      relatedId = make_shared<string>(boost::any_cast<string>(m["RelatedId"]));
    }
    if (m.find("Sender") != m.end() && !m["Sender"].empty()) {
      sender = make_shared<string>(boost::any_cast<string>(m["Sender"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TrackingNumber") != m.end() && !m["TrackingNumber"].empty()) {
      trackingNumber = make_shared<string>(boost::any_cast<string>(m["TrackingNumber"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfo() = default;
};
class QueryInvoiceInfoByRequestNoResponseBodyReturnValueList : public Darabonba::Model {
public:
  shared_ptr<double> amount{};
  shared_ptr<string> appCode{};
  shared_ptr<string> currencyCode{};
  shared_ptr<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListCustomer> customer{};
  shared_ptr<vector<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailList>> detailList{};
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<double> excludingTaxAmount{};
  shared_ptr<double> excludingTaxRedAmount{};
  shared_ptr<double> excludingTaxRemainAmount{};
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceDate{};
  shared_ptr<long> invoiceId{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<string> invoiceStatus{};
  shared_ptr<string> invoiceType{};
  shared_ptr<bool> isRed{};
  shared_ptr<bool> isReissue{};
  shared_ptr<string> language{};
  shared_ptr<string> linkInvoiceCode{};
  shared_ptr<string> linkInvoiceNo{};
  shared_ptr<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfo> logisticsInfo{};
  shared_ptr<string> materialType{};
  shared_ptr<string> memo{};
  shared_ptr<string> ouCode{};
  shared_ptr<string> purchaserBankInfo{};
  shared_ptr<string> purchaserContactInfo{};
  shared_ptr<string> purchaserName{};
  shared_ptr<string> purchaserTaxNo{};
  shared_ptr<double> redAmount{};
  shared_ptr<string> relatedId{};
  shared_ptr<double> remainAmount{};
  shared_ptr<string> sign{};
  shared_ptr<string> siteId{};
  shared_ptr<double> taxAmount{};
  shared_ptr<string> uuid{};

  QueryInvoiceInfoByRequestNoResponseBodyReturnValueList() {}

  explicit QueryInvoiceInfoByRequestNoResponseBodyReturnValueList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (currencyCode) {
      res["CurrencyCode"] = boost::any(*currencyCode);
    }
    if (customer) {
      res["Customer"] = customer ? boost::any(customer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detailList) {
      vector<boost::any> temp1;
      for(auto item1:*detailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetailList"] = boost::any(temp1);
    }
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (excludingTaxAmount) {
      res["ExcludingTaxAmount"] = boost::any(*excludingTaxAmount);
    }
    if (excludingTaxRedAmount) {
      res["ExcludingTaxRedAmount"] = boost::any(*excludingTaxRedAmount);
    }
    if (excludingTaxRemainAmount) {
      res["ExcludingTaxRemainAmount"] = boost::any(*excludingTaxRemainAmount);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceDate) {
      res["InvoiceDate"] = boost::any(*invoiceDate);
    }
    if (invoiceId) {
      res["InvoiceId"] = boost::any(*invoiceId);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (invoiceStatus) {
      res["InvoiceStatus"] = boost::any(*invoiceStatus);
    }
    if (invoiceType) {
      res["InvoiceType"] = boost::any(*invoiceType);
    }
    if (isRed) {
      res["IsRed"] = boost::any(*isRed);
    }
    if (isReissue) {
      res["IsReissue"] = boost::any(*isReissue);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (linkInvoiceCode) {
      res["LinkInvoiceCode"] = boost::any(*linkInvoiceCode);
    }
    if (linkInvoiceNo) {
      res["LinkInvoiceNo"] = boost::any(*linkInvoiceNo);
    }
    if (logisticsInfo) {
      res["LogisticsInfo"] = logisticsInfo ? boost::any(logisticsInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (materialType) {
      res["MaterialType"] = boost::any(*materialType);
    }
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (ouCode) {
      res["OuCode"] = boost::any(*ouCode);
    }
    if (purchaserBankInfo) {
      res["PurchaserBankInfo"] = boost::any(*purchaserBankInfo);
    }
    if (purchaserContactInfo) {
      res["PurchaserContactInfo"] = boost::any(*purchaserContactInfo);
    }
    if (purchaserName) {
      res["PurchaserName"] = boost::any(*purchaserName);
    }
    if (purchaserTaxNo) {
      res["PurchaserTaxNo"] = boost::any(*purchaserTaxNo);
    }
    if (redAmount) {
      res["RedAmount"] = boost::any(*redAmount);
    }
    if (relatedId) {
      res["RelatedId"] = boost::any(*relatedId);
    }
    if (remainAmount) {
      res["RemainAmount"] = boost::any(*remainAmount);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (siteId) {
      res["SiteId"] = boost::any(*siteId);
    }
    if (taxAmount) {
      res["TaxAmount"] = boost::any(*taxAmount);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("CurrencyCode") != m.end() && !m["CurrencyCode"].empty()) {
      currencyCode = make_shared<string>(boost::any_cast<string>(m["CurrencyCode"]));
    }
    if (m.find("Customer") != m.end() && !m["Customer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Customer"].type()) {
        QueryInvoiceInfoByRequestNoResponseBodyReturnValueListCustomer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Customer"]));
        customer = make_shared<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListCustomer>(model1);
      }
    }
    if (m.find("DetailList") != m.end() && !m["DetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["DetailList"].type()) {
        vector<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detailList = make_shared<vector<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListDetailList>>(expect1);
      }
    }
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ExcludingTaxAmount") != m.end() && !m["ExcludingTaxAmount"].empty()) {
      excludingTaxAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxAmount"]));
    }
    if (m.find("ExcludingTaxRedAmount") != m.end() && !m["ExcludingTaxRedAmount"].empty()) {
      excludingTaxRedAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxRedAmount"]));
    }
    if (m.find("ExcludingTaxRemainAmount") != m.end() && !m["ExcludingTaxRemainAmount"].empty()) {
      excludingTaxRemainAmount = make_shared<double>(boost::any_cast<double>(m["ExcludingTaxRemainAmount"]));
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceDate") != m.end() && !m["InvoiceDate"].empty()) {
      invoiceDate = make_shared<string>(boost::any_cast<string>(m["InvoiceDate"]));
    }
    if (m.find("InvoiceId") != m.end() && !m["InvoiceId"].empty()) {
      invoiceId = make_shared<long>(boost::any_cast<long>(m["InvoiceId"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("InvoiceStatus") != m.end() && !m["InvoiceStatus"].empty()) {
      invoiceStatus = make_shared<string>(boost::any_cast<string>(m["InvoiceStatus"]));
    }
    if (m.find("InvoiceType") != m.end() && !m["InvoiceType"].empty()) {
      invoiceType = make_shared<string>(boost::any_cast<string>(m["InvoiceType"]));
    }
    if (m.find("IsRed") != m.end() && !m["IsRed"].empty()) {
      isRed = make_shared<bool>(boost::any_cast<bool>(m["IsRed"]));
    }
    if (m.find("IsReissue") != m.end() && !m["IsReissue"].empty()) {
      isReissue = make_shared<bool>(boost::any_cast<bool>(m["IsReissue"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LinkInvoiceCode") != m.end() && !m["LinkInvoiceCode"].empty()) {
      linkInvoiceCode = make_shared<string>(boost::any_cast<string>(m["LinkInvoiceCode"]));
    }
    if (m.find("LinkInvoiceNo") != m.end() && !m["LinkInvoiceNo"].empty()) {
      linkInvoiceNo = make_shared<string>(boost::any_cast<string>(m["LinkInvoiceNo"]));
    }
    if (m.find("LogisticsInfo") != m.end() && !m["LogisticsInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogisticsInfo"].type()) {
        QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogisticsInfo"]));
        logisticsInfo = make_shared<QueryInvoiceInfoByRequestNoResponseBodyReturnValueListLogisticsInfo>(model1);
      }
    }
    if (m.find("MaterialType") != m.end() && !m["MaterialType"].empty()) {
      materialType = make_shared<string>(boost::any_cast<string>(m["MaterialType"]));
    }
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("OuCode") != m.end() && !m["OuCode"].empty()) {
      ouCode = make_shared<string>(boost::any_cast<string>(m["OuCode"]));
    }
    if (m.find("PurchaserBankInfo") != m.end() && !m["PurchaserBankInfo"].empty()) {
      purchaserBankInfo = make_shared<string>(boost::any_cast<string>(m["PurchaserBankInfo"]));
    }
    if (m.find("PurchaserContactInfo") != m.end() && !m["PurchaserContactInfo"].empty()) {
      purchaserContactInfo = make_shared<string>(boost::any_cast<string>(m["PurchaserContactInfo"]));
    }
    if (m.find("PurchaserName") != m.end() && !m["PurchaserName"].empty()) {
      purchaserName = make_shared<string>(boost::any_cast<string>(m["PurchaserName"]));
    }
    if (m.find("PurchaserTaxNo") != m.end() && !m["PurchaserTaxNo"].empty()) {
      purchaserTaxNo = make_shared<string>(boost::any_cast<string>(m["PurchaserTaxNo"]));
    }
    if (m.find("RedAmount") != m.end() && !m["RedAmount"].empty()) {
      redAmount = make_shared<double>(boost::any_cast<double>(m["RedAmount"]));
    }
    if (m.find("RelatedId") != m.end() && !m["RelatedId"].empty()) {
      relatedId = make_shared<string>(boost::any_cast<string>(m["RelatedId"]));
    }
    if (m.find("RemainAmount") != m.end() && !m["RemainAmount"].empty()) {
      remainAmount = make_shared<double>(boost::any_cast<double>(m["RemainAmount"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("SiteId") != m.end() && !m["SiteId"].empty()) {
      siteId = make_shared<string>(boost::any_cast<string>(m["SiteId"]));
    }
    if (m.find("TaxAmount") != m.end() && !m["TaxAmount"].empty()) {
      taxAmount = make_shared<double>(boost::any_cast<double>(m["TaxAmount"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoResponseBodyReturnValueList() = default;
};
class QueryInvoiceInfoByRequestNoResponseBodyReturnValue : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> encryptProps{};
  shared_ptr<vector<QueryInvoiceInfoByRequestNoResponseBodyReturnValueList>> list{};
  shared_ptr<string> sign{};

  QueryInvoiceInfoByRequestNoResponseBodyReturnValue() {}

  explicit QueryInvoiceInfoByRequestNoResponseBodyReturnValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptProps) {
      res["EncryptProps"] = boost::any(*encryptProps);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptProps") != m.end() && !m["EncryptProps"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EncryptProps"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      encryptProps = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryInvoiceInfoByRequestNoResponseBodyReturnValueList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryInvoiceInfoByRequestNoResponseBodyReturnValueList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryInvoiceInfoByRequestNoResponseBodyReturnValueList>>(expect1);
      }
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoResponseBodyReturnValue() = default;
};
class QueryInvoiceInfoByRequestNoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<QueryInvoiceInfoByRequestNoResponseBodyReturnValue> returnValue{};

  QueryInvoiceInfoByRequestNoResponseBody() {}

  explicit QueryInvoiceInfoByRequestNoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (returnValue) {
      res["ReturnValue"] = returnValue ? boost::any(returnValue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ReturnValue") != m.end() && !m["ReturnValue"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReturnValue"].type()) {
        QueryInvoiceInfoByRequestNoResponseBodyReturnValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReturnValue"]));
        returnValue = make_shared<QueryInvoiceInfoByRequestNoResponseBodyReturnValue>(model1);
      }
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoResponseBody() = default;
};
class QueryInvoiceInfoByRequestNoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryInvoiceInfoByRequestNoResponseBody> body{};

  QueryInvoiceInfoByRequestNoResponse() {}

  explicit QueryInvoiceInfoByRequestNoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryInvoiceInfoByRequestNoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryInvoiceInfoByRequestNoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryInvoiceInfoByRequestNoResponse() = default;
};
class QueryMessageCallbackInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryMessageCallbackInfoRequest() {}

  explicit QueryMessageCallbackInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryMessageCallbackInfoRequest() = default;
};
class QueryMessageCallbackInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  QueryMessageCallbackInfoResponseBody() {}

  explicit QueryMessageCallbackInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~QueryMessageCallbackInfoResponseBody() = default;
};
class QueryMessageCallbackInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMessageCallbackInfoResponseBody> body{};

  QueryMessageCallbackInfoResponse() {}

  explicit QueryMessageCallbackInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMessageCallbackInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMessageCallbackInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMessageCallbackInfoResponse() = default;
};
class QueryMessageQueueListRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryMessageQueueListRequest() {}

  explicit QueryMessageQueueListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryMessageQueueListRequest() = default;
};
class QueryMessageQueueListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryMessageQueueListResponseBody() {}

  explicit QueryMessageQueueListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryMessageQueueListResponseBody() = default;
};
class QueryMessageQueueListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMessageQueueListResponseBody> body{};

  QueryMessageQueueListResponse() {}

  explicit QueryMessageQueueListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMessageQueueListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMessageQueueListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMessageQueueListResponse() = default;
};
class QueryMonthlyBillInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> billCycle{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subjectItemId{};

  QueryMonthlyBillInfoRequest() {}

  explicit QueryMonthlyBillInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billCycle) {
      res["BillCycle"] = boost::any(*billCycle);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (subjectItemId) {
      res["SubjectItemId"] = boost::any(*subjectItemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillCycle") != m.end() && !m["BillCycle"].empty()) {
      billCycle = make_shared<string>(boost::any_cast<string>(m["BillCycle"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SubjectItemId") != m.end() && !m["SubjectItemId"].empty()) {
      subjectItemId = make_shared<string>(boost::any_cast<string>(m["SubjectItemId"]));
    }
  }


  virtual ~QueryMonthlyBillInfoRequest() = default;
};
class QueryMonthlyBillInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryMonthlyBillInfoResponseBody() {}

  explicit QueryMonthlyBillInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryMonthlyBillInfoResponseBody() = default;
};
class QueryMonthlyBillInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMonthlyBillInfoResponseBody> body{};

  QueryMonthlyBillInfoResponse() {}

  explicit QueryMonthlyBillInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMonthlyBillInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMonthlyBillInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMonthlyBillInfoResponse() = default;
};
class QueryMonthlyStatisticsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> endDate{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startDate{};

  QueryMonthlyStatisticsInfoRequest() {}

  explicit QueryMonthlyStatisticsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~QueryMonthlyStatisticsInfoRequest() = default;
};
class QueryMonthlyStatisticsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryMonthlyStatisticsInfoResponseBody() {}

  explicit QueryMonthlyStatisticsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryMonthlyStatisticsInfoResponseBody() = default;
};
class QueryMonthlyStatisticsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMonthlyStatisticsInfoResponseBody> body{};

  QueryMonthlyStatisticsInfoResponse() {}

  explicit QueryMonthlyStatisticsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMonthlyStatisticsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMonthlyStatisticsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMonthlyStatisticsInfoResponse() = default;
};
class QueryNoBuyTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryNoBuyTasksRequest() {}

  explicit QueryNoBuyTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryNoBuyTasksRequest() = default;
};
class QueryNoBuyTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};

  QueryNoBuyTasksResponseBody() {}

  explicit QueryNoBuyTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~QueryNoBuyTasksResponseBody() = default;
};
class QueryNoBuyTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryNoBuyTasksResponseBody> body{};

  QueryNoBuyTasksResponse() {}

  explicit QueryNoBuyTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryNoBuyTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryNoBuyTasksResponseBody>(model1);
      }
    }
  }


  virtual ~QueryNoBuyTasksResponse() = default;
};
class QueryNoDistributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryNoDistributeRequest() {}

  explicit QueryNoDistributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryNoDistributeRequest() = default;
};
class QueryNoDistributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryNoDistributeResponseBody() {}

  explicit QueryNoDistributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryNoDistributeResponseBody() = default;
};
class QueryNoDistributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryNoDistributeResponseBody> body{};

  QueryNoDistributeResponse() {}

  explicit QueryNoDistributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryNoDistributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryNoDistributeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryNoDistributeResponse() = default;
};
class QueryOpenStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> busOffer{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> prodId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryOpenStatusRequest() {}

  explicit QueryOpenStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (busOffer) {
      res["BusOffer"] = boost::any(*busOffer);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (prodId) {
      res["ProdId"] = boost::any(*prodId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusOffer") != m.end() && !m["BusOffer"].empty()) {
      busOffer = make_shared<long>(boost::any_cast<long>(m["BusOffer"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ProdId") != m.end() && !m["ProdId"].empty()) {
      prodId = make_shared<string>(boost::any_cast<string>(m["ProdId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryOpenStatusRequest() = default;
};
class QueryOpenStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  QueryOpenStatusResponseBody() {}

  explicit QueryOpenStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~QueryOpenStatusResponseBody() = default;
};
class QueryOpenStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryOpenStatusResponseBody> body{};

  QueryOpenStatusResponse() {}

  explicit QueryOpenStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryOpenStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOpenStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOpenStatusResponse() = default;
};
class QueryPackageDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};

  QueryPackageDetailRequest() {}

  explicit QueryPackageDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryPackageDetailRequest() = default;
};
class QueryPackageDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryPackageDetailResponseBody() {}

  explicit QueryPackageDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryPackageDetailResponseBody() = default;
};
class QueryPackageDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPackageDetailResponseBody> body{};

  QueryPackageDetailResponse() {}

  explicit QueryPackageDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPackageDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPackageDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPackageDetailResponse() = default;
};
class QueryPackageListRequest : public Darabonba::Model {
public:
  shared_ptr<string> billCycle{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryPackageListRequest() {}

  explicit QueryPackageListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billCycle) {
      res["BillCycle"] = boost::any(*billCycle);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillCycle") != m.end() && !m["BillCycle"].empty()) {
      billCycle = make_shared<string>(boost::any_cast<string>(m["BillCycle"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryPackageListRequest() = default;
};
class QueryPackageListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryPackageListResponseBody() {}

  explicit QueryPackageListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryPackageListResponseBody() = default;
};
class QueryPackageListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPackageListResponseBody> body{};

  QueryPackageListResponse() {}

  explicit QueryPackageListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPackageListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPackageListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPackageListResponse() = default;
};
class QueryPackageStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryPackageStatisticsRequest() {}

  explicit QueryPackageStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryPackageStatisticsRequest() = default;
};
class QueryPackageStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryPackageStatisticsResponseBody() {}

  explicit QueryPackageStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryPackageStatisticsResponseBody() = default;
};
class QueryPackageStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPackageStatisticsResponseBody> body{};

  QueryPackageStatisticsResponse() {}

  explicit QueryPackageStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPackageStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPackageStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPackageStatisticsResponse() = default;
};
class QueryPoolCityListRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryPoolCityListRequest() {}

  explicit QueryPoolCityListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryPoolCityListRequest() = default;
};
class QueryPoolCityListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryPoolCityListResponseBody() {}

  explicit QueryPoolCityListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryPoolCityListResponseBody() = default;
};
class QueryPoolCityListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPoolCityListResponseBody> body{};

  QueryPoolCityListResponse() {}

  explicit QueryPoolCityListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPoolCityListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPoolCityListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPoolCityListResponse() = default;
};
class QueryPoolInfoListRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isFuzzyQuery{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> poolName{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> searchParam{};

  QueryPoolInfoListRequest() {}

  explicit QueryPoolInfoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isFuzzyQuery) {
      res["IsFuzzyQuery"] = boost::any(*isFuzzyQuery);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (searchParam) {
      res["SearchParam"] = boost::any(*searchParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsFuzzyQuery") != m.end() && !m["IsFuzzyQuery"].empty()) {
      isFuzzyQuery = make_shared<bool>(boost::any_cast<bool>(m["IsFuzzyQuery"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SearchParam") != m.end() && !m["SearchParam"].empty()) {
      searchParam = make_shared<string>(boost::any_cast<string>(m["SearchParam"]));
    }
  }


  virtual ~QueryPoolInfoListRequest() = default;
};
class QueryPoolInfoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryPoolInfoListResponseBody() {}

  explicit QueryPoolInfoListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryPoolInfoListResponseBody() = default;
};
class QueryPoolInfoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPoolInfoListResponseBody> body{};

  QueryPoolInfoListResponse() {}

  explicit QueryPoolInfoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPoolInfoListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPoolInfoListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPoolInfoListResponse() = default;
};
class QueryPoolMonthlyBillInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> billCycle{};
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryPoolMonthlyBillInfoRequest() {}

  explicit QueryPoolMonthlyBillInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billCycle) {
      res["BillCycle"] = boost::any(*billCycle);
    }
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillCycle") != m.end() && !m["BillCycle"].empty()) {
      billCycle = make_shared<string>(boost::any_cast<string>(m["BillCycle"]));
    }
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryPoolMonthlyBillInfoRequest() = default;
};
class QueryPoolMonthlyBillInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  QueryPoolMonthlyBillInfoResponseBody() {}

  explicit QueryPoolMonthlyBillInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryPoolMonthlyBillInfoResponseBody() = default;
};
class QueryPoolMonthlyBillInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPoolMonthlyBillInfoResponseBody> body{};

  QueryPoolMonthlyBillInfoResponse() {}

  explicit QueryPoolMonthlyBillInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPoolMonthlyBillInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPoolMonthlyBillInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPoolMonthlyBillInfoResponse() = default;
};
class QueryPoolStatisticsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryPoolStatisticsInfoRequest() {}

  explicit QueryPoolStatisticsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryPoolStatisticsInfoRequest() = default;
};
class QueryPoolStatisticsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryPoolStatisticsInfoResponseBody() {}

  explicit QueryPoolStatisticsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryPoolStatisticsInfoResponseBody() = default;
};
class QueryPoolStatisticsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPoolStatisticsInfoResponseBody> body{};

  QueryPoolStatisticsInfoResponse() {}

  explicit QueryPoolStatisticsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPoolStatisticsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPoolStatisticsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPoolStatisticsInfoResponse() = default;
};
class QueryPoolSummaryInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryPoolSummaryInfoRequest() {}

  explicit QueryPoolSummaryInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryPoolSummaryInfoRequest() = default;
};
class QueryPoolSummaryInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryPoolSummaryInfoResponseBody() {}

  explicit QueryPoolSummaryInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryPoolSummaryInfoResponseBody() = default;
};
class QueryPoolSummaryInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPoolSummaryInfoResponseBody> body{};

  QueryPoolSummaryInfoResponse() {}

  explicit QueryPoolSummaryInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPoolSummaryInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPoolSummaryInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPoolSummaryInfoResponse() = default;
};
class QueryPurchasedInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryPurchasedInfoRequest() {}

  explicit QueryPurchasedInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryPurchasedInfoRequest() = default;
};
class QueryPurchasedInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryPurchasedInfoResponseBody() {}

  explicit QueryPurchasedInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryPurchasedInfoResponseBody() = default;
};
class QueryPurchasedInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPurchasedInfoResponseBody> body{};

  QueryPurchasedInfoResponse() {}

  explicit QueryPurchasedInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPurchasedInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPurchasedInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPurchasedInfoResponse() = default;
};
class QueryPurchasedResListRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> city{};
  shared_ptr<bool> isDisplayPool{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resBindStatus{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  QueryPurchasedResListRequest() {}

  explicit QueryPurchasedResListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (isDisplayPool) {
      res["IsDisplayPool"] = boost::any(*isDisplayPool);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resBindStatus) {
      res["ResBindStatus"] = boost::any(*resBindStatus);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("IsDisplayPool") != m.end() && !m["IsDisplayPool"].empty()) {
      isDisplayPool = make_shared<bool>(boost::any_cast<bool>(m["IsDisplayPool"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResBindStatus") != m.end() && !m["ResBindStatus"].empty()) {
      resBindStatus = make_shared<long>(boost::any_cast<long>(m["ResBindStatus"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~QueryPurchasedResListRequest() = default;
};
class QueryPurchasedResListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryPurchasedResListResponseBody() {}

  explicit QueryPurchasedResListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryPurchasedResListResponseBody() = default;
};
class QueryPurchasedResListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPurchasedResListResponseBody> body{};

  QueryPurchasedResListResponse() {}

  explicit QueryPurchasedResListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPurchasedResListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPurchasedResListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPurchasedResListResponse() = default;
};
class QueryQRCodeInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNumber{};

  QueryQRCodeInfoRequest() {}

  explicit QueryQRCodeInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNumber) {
      res["SecretNumber"] = boost::any(*secretNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNumber") != m.end() && !m["SecretNumber"].empty()) {
      secretNumber = make_shared<string>(boost::any_cast<string>(m["SecretNumber"]));
    }
  }


  virtual ~QueryQRCodeInfoRequest() = default;
};
class QueryQRCodeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> token{};

  QueryQRCodeInfoResponseBody() {}

  explicit QueryQRCodeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~QueryQRCodeInfoResponseBody() = default;
};
class QueryQRCodeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryQRCodeInfoResponseBody> body{};

  QueryQRCodeInfoResponse() {}

  explicit QueryQRCodeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryQRCodeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryQRCodeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryQRCodeInfoResponse() = default;
};
class QueryRecordingUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> callDate{};
  shared_ptr<string> callId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryRecordingUrlRequest() {}

  explicit QueryRecordingUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (callDate) {
      res["CallDate"] = boost::any(*callDate);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("CallDate") != m.end() && !m["CallDate"].empty()) {
      callDate = make_shared<string>(boost::any_cast<string>(m["CallDate"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryRecordingUrlRequest() = default;
};
class QueryRecordingUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryRecordingUrlResponseBody() {}

  explicit QueryRecordingUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryRecordingUrlResponseBody() = default;
};
class QueryRecordingUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordingUrlResponseBody> body{};

  QueryRecordingUrlResponse() {}

  explicit QueryRecordingUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordingUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordingUrlResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordingUrlResponse() = default;
};
class QueryResSummaryInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryResSummaryInfoRequest() {}

  explicit QueryResSummaryInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryResSummaryInfoRequest() = default;
};
class QueryResSummaryInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryResSummaryInfoResponseBody() {}

  explicit QueryResSummaryInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryResSummaryInfoResponseBody() = default;
};
class QueryResSummaryInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryResSummaryInfoResponseBody> body{};

  QueryResSummaryInfoResponse() {}

  explicit QueryResSummaryInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryResSummaryInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryResSummaryInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryResSummaryInfoResponse() = default;
};
class QueryRingToneUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> fileKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryRingToneUrlRequest() {}

  explicit QueryRingToneUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (fileKey) {
      res["FileKey"] = boost::any(*fileKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("FileKey") != m.end() && !m["FileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["FileKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryRingToneUrlRequest() = default;
};
class QueryRingToneUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryRingToneUrlResponseBody() {}

  explicit QueryRingToneUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryRingToneUrlResponseBody() = default;
};
class QueryRingToneUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRingToneUrlResponseBody> body{};

  QueryRingToneUrlResponse() {}

  explicit QueryRingToneUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRingToneUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRingToneUrlResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRingToneUrlResponse() = default;
};
class QueryRingTonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> playType{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryRingTonesRequest() {}

  explicit QueryRingTonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (playType) {
      res["PlayType"] = boost::any(*playType);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlayType") != m.end() && !m["PlayType"].empty()) {
      playType = make_shared<string>(boost::any_cast<string>(m["PlayType"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryRingTonesRequest() = default;
};
class QueryRingTonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryRingTonesResponseBody() {}

  explicit QueryRingTonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryRingTonesResponseBody() = default;
};
class QueryRingTonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRingTonesResponseBody> body{};

  QueryRingTonesResponse() {}

  explicit QueryRingTonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRingTonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRingTonesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRingTonesResponse() = default;
};
class QuerySimplePoolInfoListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolName{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QuerySimplePoolInfoListRequest() {}

  explicit QuerySimplePoolInfoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QuerySimplePoolInfoListRequest() = default;
};
class QuerySimplePoolInfoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QuerySimplePoolInfoListResponseBody() {}

  explicit QuerySimplePoolInfoListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QuerySimplePoolInfoListResponseBody() = default;
};
class QuerySimplePoolInfoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySimplePoolInfoListResponseBody> body{};

  QuerySimplePoolInfoListResponse() {}

  explicit QuerySimplePoolInfoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QuerySimplePoolInfoListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySimplePoolInfoListResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySimplePoolInfoListResponse() = default;
};
class QueryStatisticsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> endDate{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startDate{};

  QueryStatisticsInfoRequest() {}

  explicit QueryStatisticsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~QueryStatisticsInfoRequest() = default;
};
class QueryStatisticsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryStatisticsInfoResponseBody() {}

  explicit QueryStatisticsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryStatisticsInfoResponseBody() = default;
};
class QueryStatisticsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryStatisticsInfoResponseBody> body{};

  QueryStatisticsInfoResponse() {}

  explicit QueryStatisticsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryStatisticsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryStatisticsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryStatisticsInfoResponse() = default;
};
class QueryTagOpenStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> attributeKey{};
  shared_ptr<long> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subAttributeKey{};

  QueryTagOpenStatusRequest() {}

  explicit QueryTagOpenStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeKey) {
      res["AttributeKey"] = boost::any(*attributeKey);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (subAttributeKey) {
      res["SubAttributeKey"] = boost::any(*subAttributeKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttributeKey") != m.end() && !m["AttributeKey"].empty()) {
      attributeKey = make_shared<string>(boost::any_cast<string>(m["AttributeKey"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<long>(boost::any_cast<long>(m["BizType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SubAttributeKey") != m.end() && !m["SubAttributeKey"].empty()) {
      subAttributeKey = make_shared<string>(boost::any_cast<string>(m["SubAttributeKey"]));
    }
  }


  virtual ~QueryTagOpenStatusRequest() = default;
};
class QueryTagOpenStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  QueryTagOpenStatusResponseBody() {}

  explicit QueryTagOpenStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryTagOpenStatusResponseBody() = default;
};
class QueryTagOpenStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTagOpenStatusResponseBody> body{};

  QueryTagOpenStatusResponse() {}

  explicit QueryTagOpenStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTagOpenStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTagOpenStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTagOpenStatusResponse() = default;
};
class QueryTransferDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> recordId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryTransferDetailsRequest() {}

  explicit QueryTransferDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryTransferDetailsRequest() = default;
};
class QueryTransferDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryTransferDetailsResponseBody() {}

  explicit QueryTransferDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryTransferDetailsResponseBody() = default;
};
class QueryTransferDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTransferDetailsResponseBody> body{};

  QueryTransferDetailsResponse() {}

  explicit QueryTransferDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTransferDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTransferDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTransferDetailsResponse() = default;
};
class QueryTransferRecordRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> recordId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryTransferRecordRequest() {}

  explicit QueryTransferRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryTransferRecordRequest() = default;
};
class QueryTransferRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryTransferRecordResponseBody() {}

  explicit QueryTransferRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryTransferRecordResponseBody() = default;
};
class QueryTransferRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTransferRecordResponseBody> body{};

  QueryTransferRecordResponse() {}

  explicit QueryTransferRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTransferRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTransferRecordResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTransferRecordResponse() = default;
};
class QueryTransferRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> recordId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryTransferRecordsRequest() {}

  explicit QueryTransferRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryTransferRecordsRequest() = default;
};
class QueryTransferRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryTransferRecordsResponseBody() {}

  explicit QueryTransferRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryTransferRecordsResponseBody() = default;
};
class QueryTransferRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTransferRecordsResponseBody> body{};

  QueryTransferRecordsResponse() {}

  explicit QueryTransferRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTransferRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTransferRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTransferRecordsResponse() = default;
};
class QueryUserDeleteStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<string> country{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<long> level{};
  shared_ptr<string> message{};
  shared_ptr<string> pk{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> prompt{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> url{};

  QueryUserDeleteStatusRequest() {}

  explicit QueryUserDeleteStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QueryUserDeleteStatusRequest() = default;
};
class QueryUserDeleteStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<string> country{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<long> level{};
  shared_ptr<string> message{};
  shared_ptr<string> pk{};
  shared_ptr<string> prompt{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> url{};

  QueryUserDeleteStatusResponseBody() {}

  explicit QueryUserDeleteStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QueryUserDeleteStatusResponseBody() = default;
};
class QueryUserDeleteStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserDeleteStatusResponseBody> body{};

  QueryUserDeleteStatusResponse() {}

  explicit QueryUserDeleteStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryUserDeleteStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserDeleteStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserDeleteStatusResponse() = default;
};
class QueryUserInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryUserInfoRequest() {}

  explicit QueryUserInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryUserInfoRequest() = default;
};
class QueryUserInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryUserInfoResponseBody() {}

  explicit QueryUserInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryUserInfoResponseBody() = default;
};
class QueryUserInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserInfoResponseBody> body{};

  QueryUserInfoResponse() {}

  explicit QueryUserInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryUserInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserInfoResponse() = default;
};
class QueryUserResPoolInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryUserResPoolInfoRequest() {}

  explicit QueryUserResPoolInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryUserResPoolInfoRequest() = default;
};
class QueryUserResPoolInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryUserResPoolInfoResponseBody() {}

  explicit QueryUserResPoolInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryUserResPoolInfoResponseBody() = default;
};
class QueryUserResPoolInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserResPoolInfoResponseBody> body{};

  QueryUserResPoolInfoResponse() {}

  explicit QueryUserResPoolInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryUserResPoolInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserResPoolInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserResPoolInfoResponse() = default;
};
class QueryVirtualOperationShowRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryVirtualOperationShowRequest() {}

  explicit QueryVirtualOperationShowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryVirtualOperationShowRequest() = default;
};
class QueryVirtualOperationShowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  QueryVirtualOperationShowResponseBody() {}

  explicit QueryVirtualOperationShowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryVirtualOperationShowResponseBody() = default;
};
class QueryVirtualOperationShowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryVirtualOperationShowResponseBody> body{};

  QueryVirtualOperationShowResponse() {}

  explicit QueryVirtualOperationShowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryVirtualOperationShowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryVirtualOperationShowResponseBody>(model1);
      }
    }
  }


  virtual ~QueryVirtualOperationShowResponse() = default;
};
class QueryWarningListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryWarningListRequest() {}

  explicit QueryWarningListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryWarningListRequest() = default;
};
class QueryWarningListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  QueryWarningListResponseBody() {}

  explicit QueryWarningListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~QueryWarningListResponseBody() = default;
};
class QueryWarningListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWarningListResponseBody> body{};

  QueryWarningListResponse() {}

  explicit QueryWarningListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryWarningListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWarningListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWarningListResponse() = default;
};
class QueryWaybillOrderInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> outerOrderCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryWaybillOrderInfoRequest() {}

  explicit QueryWaybillOrderInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerOrderCode) {
      res["OuterOrderCode"] = boost::any(*outerOrderCode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterOrderCode") != m.end() && !m["OuterOrderCode"].empty()) {
      outerOrderCode = make_shared<string>(boost::any_cast<string>(m["OuterOrderCode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryWaybillOrderInfoRequest() = default;
};
class QueryWaybillOrderInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aliyunprice{};
  shared_ptr<string> appointGotEndTime{};
  shared_ptr<string> appointGotStartTime{};
  shared_ptr<long> bizType{};
  shared_ptr<string> city{};
  shared_ptr<string> cpCode{};
  shared_ptr<string> gotCode{};
  shared_ptr<string> lastLogisticDetail{};
  shared_ptr<string> logisticsGmtModified{};
  shared_ptr<string> logisticsStatus{};
  shared_ptr<string> logisticsStatusDesc{};
  shared_ptr<string> mailNo{};
  shared_ptr<string> outerOrderCode{};

  QueryWaybillOrderInfoResponseBodyData() {}

  explicit QueryWaybillOrderInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunprice) {
      res["Aliyunprice"] = boost::any(*aliyunprice);
    }
    if (appointGotEndTime) {
      res["AppointGotEndTime"] = boost::any(*appointGotEndTime);
    }
    if (appointGotStartTime) {
      res["AppointGotStartTime"] = boost::any(*appointGotStartTime);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (cpCode) {
      res["CpCode"] = boost::any(*cpCode);
    }
    if (gotCode) {
      res["GotCode"] = boost::any(*gotCode);
    }
    if (lastLogisticDetail) {
      res["LastLogisticDetail"] = boost::any(*lastLogisticDetail);
    }
    if (logisticsGmtModified) {
      res["LogisticsGmtModified"] = boost::any(*logisticsGmtModified);
    }
    if (logisticsStatus) {
      res["LogisticsStatus"] = boost::any(*logisticsStatus);
    }
    if (logisticsStatusDesc) {
      res["LogisticsStatusDesc"] = boost::any(*logisticsStatusDesc);
    }
    if (mailNo) {
      res["MailNo"] = boost::any(*mailNo);
    }
    if (outerOrderCode) {
      res["OuterOrderCode"] = boost::any(*outerOrderCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aliyunprice") != m.end() && !m["Aliyunprice"].empty()) {
      aliyunprice = make_shared<string>(boost::any_cast<string>(m["Aliyunprice"]));
    }
    if (m.find("AppointGotEndTime") != m.end() && !m["AppointGotEndTime"].empty()) {
      appointGotEndTime = make_shared<string>(boost::any_cast<string>(m["AppointGotEndTime"]));
    }
    if (m.find("AppointGotStartTime") != m.end() && !m["AppointGotStartTime"].empty()) {
      appointGotStartTime = make_shared<string>(boost::any_cast<string>(m["AppointGotStartTime"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<long>(boost::any_cast<long>(m["BizType"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("CpCode") != m.end() && !m["CpCode"].empty()) {
      cpCode = make_shared<string>(boost::any_cast<string>(m["CpCode"]));
    }
    if (m.find("GotCode") != m.end() && !m["GotCode"].empty()) {
      gotCode = make_shared<string>(boost::any_cast<string>(m["GotCode"]));
    }
    if (m.find("LastLogisticDetail") != m.end() && !m["LastLogisticDetail"].empty()) {
      lastLogisticDetail = make_shared<string>(boost::any_cast<string>(m["LastLogisticDetail"]));
    }
    if (m.find("LogisticsGmtModified") != m.end() && !m["LogisticsGmtModified"].empty()) {
      logisticsGmtModified = make_shared<string>(boost::any_cast<string>(m["LogisticsGmtModified"]));
    }
    if (m.find("LogisticsStatus") != m.end() && !m["LogisticsStatus"].empty()) {
      logisticsStatus = make_shared<string>(boost::any_cast<string>(m["LogisticsStatus"]));
    }
    if (m.find("LogisticsStatusDesc") != m.end() && !m["LogisticsStatusDesc"].empty()) {
      logisticsStatusDesc = make_shared<string>(boost::any_cast<string>(m["LogisticsStatusDesc"]));
    }
    if (m.find("MailNo") != m.end() && !m["MailNo"].empty()) {
      mailNo = make_shared<string>(boost::any_cast<string>(m["MailNo"]));
    }
    if (m.find("OuterOrderCode") != m.end() && !m["OuterOrderCode"].empty()) {
      outerOrderCode = make_shared<string>(boost::any_cast<string>(m["OuterOrderCode"]));
    }
  }


  virtual ~QueryWaybillOrderInfoResponseBodyData() = default;
};
class QueryWaybillOrderInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryWaybillOrderInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryWaybillOrderInfoResponseBody() {}

  explicit QueryWaybillOrderInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryWaybillOrderInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryWaybillOrderInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryWaybillOrderInfoResponseBody() = default;
};
class QueryWaybillOrderInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWaybillOrderInfoResponseBody> body{};

  QueryWaybillOrderInfoResponse() {}

  explicit QueryWaybillOrderInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryWaybillOrderInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWaybillOrderInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWaybillOrderInfoResponse() = default;
};
class QueryWaybillOrderStatisticsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> granularity{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  QueryWaybillOrderStatisticsInfoRequest() {}

  explicit QueryWaybillOrderStatisticsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryWaybillOrderStatisticsInfoRequest() = default;
};
class QueryWaybillOrderStatisticsInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> aliyunpriceAmount{};
  shared_ptr<long> cancelCount{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<long> gotCount{};
  shared_ptr<long> orderTotal{};

  QueryWaybillOrderStatisticsInfoResponseBodyData() {}

  explicit QueryWaybillOrderStatisticsInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunpriceAmount) {
      res["AliyunpriceAmount"] = boost::any(*aliyunpriceAmount);
    }
    if (cancelCount) {
      res["CancelCount"] = boost::any(*cancelCount);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gotCount) {
      res["GotCount"] = boost::any(*gotCount);
    }
    if (orderTotal) {
      res["OrderTotal"] = boost::any(*orderTotal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunpriceAmount") != m.end() && !m["AliyunpriceAmount"].empty()) {
      aliyunpriceAmount = make_shared<double>(boost::any_cast<double>(m["AliyunpriceAmount"]));
    }
    if (m.find("CancelCount") != m.end() && !m["CancelCount"].empty()) {
      cancelCount = make_shared<long>(boost::any_cast<long>(m["CancelCount"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GotCount") != m.end() && !m["GotCount"].empty()) {
      gotCount = make_shared<long>(boost::any_cast<long>(m["GotCount"]));
    }
    if (m.find("OrderTotal") != m.end() && !m["OrderTotal"].empty()) {
      orderTotal = make_shared<long>(boost::any_cast<long>(m["OrderTotal"]));
    }
  }


  virtual ~QueryWaybillOrderStatisticsInfoResponseBodyData() = default;
};
class QueryWaybillOrderStatisticsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryWaybillOrderStatisticsInfoResponseBodyData>> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryWaybillOrderStatisticsInfoResponseBody() {}

  explicit QueryWaybillOrderStatisticsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryWaybillOrderStatisticsInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryWaybillOrderStatisticsInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryWaybillOrderStatisticsInfoResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryWaybillOrderStatisticsInfoResponseBody() = default;
};
class QueryWaybillOrderStatisticsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWaybillOrderStatisticsInfoResponseBody> body{};

  QueryWaybillOrderStatisticsInfoResponse() {}

  explicit QueryWaybillOrderStatisticsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryWaybillOrderStatisticsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWaybillOrderStatisticsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWaybillOrderStatisticsInfoResponse() = default;
};
class ReleaseResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<bool> isDisplayPool{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  ReleaseResourceRequest() {}

  explicit ReleaseResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (isDisplayPool) {
      res["IsDisplayPool"] = boost::any(*isDisplayPool);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("IsDisplayPool") != m.end() && !m["IsDisplayPool"].empty()) {
      isDisplayPool = make_shared<bool>(boost::any_cast<bool>(m["IsDisplayPool"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~ReleaseResourceRequest() = default;
};
class ReleaseResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  ReleaseResourceResponseBody() {}

  explicit ReleaseResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~ReleaseResourceResponseBody() = default;
};
class ReleaseResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseResourceResponseBody> body{};

  ReleaseResourceResponse() {}

  explicit ReleaseResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleaseResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseResourceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseResourceResponse() = default;
};
class TestTtsRingToneRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tts{};
  shared_ptr<string> voiceSpeed{};
  shared_ptr<string> voiceStyle{};
  shared_ptr<string> voiceType{};
  shared_ptr<string> voiceVolume{};

  TestTtsRingToneRequest() {}

  explicit TestTtsRingToneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tts) {
      res["Tts"] = boost::any(*tts);
    }
    if (voiceSpeed) {
      res["VoiceSpeed"] = boost::any(*voiceSpeed);
    }
    if (voiceStyle) {
      res["VoiceStyle"] = boost::any(*voiceStyle);
    }
    if (voiceType) {
      res["VoiceType"] = boost::any(*voiceType);
    }
    if (voiceVolume) {
      res["VoiceVolume"] = boost::any(*voiceVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tts") != m.end() && !m["Tts"].empty()) {
      tts = make_shared<string>(boost::any_cast<string>(m["Tts"]));
    }
    if (m.find("VoiceSpeed") != m.end() && !m["VoiceSpeed"].empty()) {
      voiceSpeed = make_shared<string>(boost::any_cast<string>(m["VoiceSpeed"]));
    }
    if (m.find("VoiceStyle") != m.end() && !m["VoiceStyle"].empty()) {
      voiceStyle = make_shared<string>(boost::any_cast<string>(m["VoiceStyle"]));
    }
    if (m.find("VoiceType") != m.end() && !m["VoiceType"].empty()) {
      voiceType = make_shared<string>(boost::any_cast<string>(m["VoiceType"]));
    }
    if (m.find("VoiceVolume") != m.end() && !m["VoiceVolume"].empty()) {
      voiceVolume = make_shared<string>(boost::any_cast<string>(m["VoiceVolume"]));
    }
  }


  virtual ~TestTtsRingToneRequest() = default;
};
class TestTtsRingToneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  TestTtsRingToneResponseBody() {}

  explicit TestTtsRingToneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~TestTtsRingToneResponseBody() = default;
};
class TestTtsRingToneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TestTtsRingToneResponseBody> body{};

  TestTtsRingToneResponse() {}

  explicit TestTtsRingToneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TestTtsRingToneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TestTtsRingToneResponseBody>(model1);
      }
    }
  }


  virtual ~TestTtsRingToneResponse() = default;
};
class UnbindResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> bindIds{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  UnbindResourceRequest() {}

  explicit UnbindResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (bindIds) {
      res["BindIds"] = boost::any(*bindIds);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("BindIds") != m.end() && !m["BindIds"].empty()) {
      bindIds = make_shared<string>(boost::any_cast<string>(m["BindIds"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~UnbindResourceRequest() = default;
};
class UnbindResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  UnbindResourceResponseBody() {}

  explicit UnbindResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~UnbindResourceResponseBody() = default;
};
class UnbindResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindResourceResponseBody> body{};

  UnbindResourceResponse() {}

  explicit UnbindResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnbindResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindResourceResponse() = default;
};
class UnlockResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  UnlockResourceRequest() {}

  explicit UnlockResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~UnlockResourceRequest() = default;
};
class UnlockResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  UnlockResourceResponseBody() {}

  explicit UnlockResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~UnlockResourceResponseBody() = default;
};
class UnlockResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnlockResourceResponseBody> body{};

  UnlockResourceResponse() {}

  explicit UnlockResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnlockResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnlockResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UnlockResourceResponse() = default;
};
class UpdateContactsRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateContactsRequest() {}

  explicit UpdateContactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateContactsRequest() = default;
};
class UpdateContactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  UpdateContactsResponseBody() {}

  explicit UpdateContactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~UpdateContactsResponseBody() = default;
};
class UpdateContactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateContactsResponseBody> body{};

  UpdateContactsResponse() {}

  explicit UpdateContactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateContactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateContactsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateContactsResponse() = default;
};
class UpdateGroupDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> id{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateGroupDetailRequest() {}

  explicit UpdateGroupDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateGroupDetailRequest() = default;
};
class UpdateGroupDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  UpdateGroupDetailResponseBody() {}

  explicit UpdateGroupDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~UpdateGroupDetailResponseBody() = default;
};
class UpdateGroupDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupDetailResponseBody> body{};

  UpdateGroupDetailResponse() {}

  explicit UpdateGroupDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGroupDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupDetailResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupDetailResponse() = default;
};
class UpdateGroupInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateGroupInfoRequest() {}

  explicit UpdateGroupInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateGroupInfoRequest() = default;
};
class UpdateGroupInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};

  UpdateGroupInfoResponseBody() {}

  explicit UpdateGroupInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~UpdateGroupInfoResponseBody() = default;
};
class UpdateGroupInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupInfoResponseBody> body{};

  UpdateGroupInfoResponse() {}

  explicit UpdateGroupInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGroupInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupInfoResponse() = default;
};
class UpdatePoolNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolName{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdatePoolNameRequest() {}

  explicit UpdatePoolNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdatePoolNameRequest() = default;
};
class UpdatePoolNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  UpdatePoolNameResponseBody() {}

  explicit UpdatePoolNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~UpdatePoolNameResponseBody() = default;
};
class UpdatePoolNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePoolNameResponseBody> body{};

  UpdatePoolNameResponse() {}

  explicit UpdatePoolNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePoolNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePoolNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePoolNameResponse() = default;
};
class UpdateResRemarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> remark{};
  shared_ptr<long> resType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  UpdateResRemarkRequest() {}

  explicit UpdateResRemarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resType) {
      res["ResType"] = boost::any(*resType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResType") != m.end() && !m["ResType"].empty()) {
      resType = make_shared<long>(boost::any_cast<long>(m["ResType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~UpdateResRemarkRequest() = default;
};
class UpdateResRemarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> data{};

  UpdateResRemarkResponseBody() {}

  explicit UpdateResRemarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~UpdateResRemarkResponseBody() = default;
};
class UpdateResRemarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResRemarkResponseBody> body{};

  UpdateResRemarkResponse() {}

  explicit UpdateResRemarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateResRemarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResRemarkResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResRemarkResponse() = default;
};
class ValidateOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> data{};

  ValidateOrderRequest() {}

  explicit ValidateOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~ValidateOrderRequest() = default;
};
class ValidateOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ValidateOrderResponseBody() {}

  explicit ValidateOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ValidateOrderResponseBody() = default;
};
class ValidateOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateOrderResponseBody> body{};

  ValidateOrderResponse() {}

  explicit ValidateOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ValidateOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateOrderResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  ApplyArInvoiceWithSourceResponse applyArInvoiceWithSourceWithOptions(shared_ptr<ApplyArInvoiceWithSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyArInvoiceWithSourceResponse applyArInvoiceWithSource(shared_ptr<ApplyArInvoiceWithSourceRequest> request);
  ApplyBlackInfoExportResponse applyBlackInfoExportWithOptions(shared_ptr<ApplyBlackInfoExportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyBlackInfoExportResponse applyBlackInfoExport(shared_ptr<ApplyBlackInfoExportRequest> request);
  ApplyCallRecordExportResponse applyCallRecordExportWithOptions(shared_ptr<ApplyCallRecordExportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyCallRecordExportResponse applyCallRecordExport(shared_ptr<ApplyCallRecordExportRequest> request);
  ApplyGroupNumberExportResponse applyGroupNumberExportWithOptions(shared_ptr<ApplyGroupNumberExportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyGroupNumberExportResponse applyGroupNumberExport(shared_ptr<ApplyGroupNumberExportRequest> request);
  ApplyRingToneResponse applyRingToneWithOptions(shared_ptr<ApplyRingToneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyRingToneResponse applyRingTone(shared_ptr<ApplyRingToneRequest> request);
  BatchOccupySecretResResponse batchOccupySecretResWithOptions(shared_ptr<BatchOccupySecretResRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchOccupySecretResResponse batchOccupySecretRes(shared_ptr<BatchOccupySecretResRequest> request);
  BindResourceResponse bindResourceWithOptions(shared_ptr<BindResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindResourceResponse bindResource(shared_ptr<BindResourceRequest> request);
  BlackOperateResponse blackOperateWithOptions(shared_ptr<BlackOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BlackOperateResponse blackOperate(shared_ptr<BlackOperateRequest> request);
  CreateCertifyInfoResponse createCertifyInfoWithOptions(shared_ptr<CreateCertifyInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertifyInfoResponse createCertifyInfo(shared_ptr<CreateCertifyInfoRequest> request);
  CreateContactsResponse createContactsWithOptions(shared_ptr<CreateContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateContactsResponse createContacts(shared_ptr<CreateContactsRequest> request);
  CreateGroupDetailResponse createGroupDetailWithOptions(shared_ptr<CreateGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupDetailResponse createGroupDetail(shared_ptr<CreateGroupDetailRequest> request);
  CreateGroupInfoResponse createGroupInfoWithOptions(shared_ptr<CreateGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupInfoResponse createGroupInfo(shared_ptr<CreateGroupInfoRequest> request);
  CreateLogicalDeleteResponse createLogicalDeleteWithOptions(shared_ptr<CreateLogicalDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLogicalDeleteResponse createLogicalDelete(shared_ptr<CreateLogicalDeleteRequest> request);
  CreateMessageCallbackResponse createMessageCallbackWithOptions(shared_ptr<CreateMessageCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMessageCallbackResponse createMessageCallback(shared_ptr<CreateMessageCallbackRequest> request);
  CreateMessageQueueResponse createMessageQueueWithOptions(shared_ptr<CreateMessageQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMessageQueueResponse createMessageQueue(shared_ptr<CreateMessageQueueRequest> request);
  CreatePhysicalDeleteResponse createPhysicalDeleteWithOptions(shared_ptr<CreatePhysicalDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePhysicalDeleteResponse createPhysicalDelete(shared_ptr<CreatePhysicalDeleteRequest> request);
  CreatePoolInfoResponse createPoolInfoWithOptions(shared_ptr<CreatePoolInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePoolInfoResponse createPoolInfo(shared_ptr<CreatePoolInfoRequest> request);
  CreateProductResponse createProductWithOptions(shared_ptr<CreateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductResponse createProduct(shared_ptr<CreateProductRequest> request);
  CreateRingToneResponse createRingToneWithOptions(shared_ptr<CreateRingToneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRingToneResponse createRingTone(shared_ptr<CreateRingToneRequest> request);
  CreateSubsTrialResponse createSubsTrialWithOptions(shared_ptr<CreateSubsTrialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSubsTrialResponse createSubsTrial(shared_ptr<CreateSubsTrialRequest> request);
  CreateTransferRecordResponse createTransferRecordWithOptions(shared_ptr<CreateTransferRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTransferRecordResponse createTransferRecord(shared_ptr<CreateTransferRecordRequest> request);
  DeleteCertifyInfoResponse deleteCertifyInfoWithOptions(shared_ptr<DeleteCertifyInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCertifyInfoResponse deleteCertifyInfo(shared_ptr<DeleteCertifyInfoRequest> request);
  DeleteContactsResponse deleteContactsWithOptions(shared_ptr<DeleteContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteContactsResponse deleteContacts(shared_ptr<DeleteContactsRequest> request);
  DeleteGroupDetailResponse deleteGroupDetailWithOptions(shared_ptr<DeleteGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupDetailResponse deleteGroupDetail(shared_ptr<DeleteGroupDetailRequest> request);
  DeleteMessageCallbackResponse deleteMessageCallbackWithOptions(shared_ptr<DeleteMessageCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMessageCallbackResponse deleteMessageCallback(shared_ptr<DeleteMessageCallbackRequest> request);
  DeleteRingToneResponse deleteRingToneWithOptions(shared_ptr<DeleteRingToneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRingToneResponse deleteRingTone(shared_ptr<DeleteRingToneRequest> request);
  DownloadCompleteResponse downloadCompleteWithOptions(shared_ptr<DownloadCompleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DownloadCompleteResponse downloadComplete(shared_ptr<DownloadCompleteRequest> request);
  ExportResResponse exportResWithOptions(shared_ptr<ExportResRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportResResponse exportRes(shared_ptr<ExportResRequest> request);
  GetEinvoicePdfDataResponse getEinvoicePdfDataWithOptions(shared_ptr<GetEinvoicePdfDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEinvoicePdfDataResponse getEinvoicePdfData(shared_ptr<GetEinvoicePdfDataRequest> request);
  GetSecretAsrInfoResponse getSecretAsrInfoWithOptions(shared_ptr<GetSecretAsrInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecretAsrInfoResponse getSecretAsrInfo(shared_ptr<GetSecretAsrInfoRequest> request);
  GetUserResourceTagStatusResponse getUserResourceTagStatusWithOptions(shared_ptr<GetUserResourceTagStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResourceTagStatusResponse getUserResourceTagStatus(shared_ptr<GetUserResourceTagStatusRequest> request);
  ListAsrLanguageModelsResponse listAsrLanguageModelsWithOptions(shared_ptr<ListAsrLanguageModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAsrLanguageModelsResponse listAsrLanguageModels(shared_ptr<ListAsrLanguageModelsRequest> request);
  LockResourceResponse lockResourceWithOptions(shared_ptr<LockResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LockResourceResponse lockResource(shared_ptr<LockResourceRequest> request);
  OccupySecretResResponse occupySecretResWithOptions(shared_ptr<OccupySecretResRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OccupySecretResResponse occupySecretRes(shared_ptr<OccupySecretResRequest> request);
  OrderSucceededCallbackResponse orderSucceededCallbackWithOptions(shared_ptr<OrderSucceededCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OrderSucceededCallbackResponse orderSucceededCallback(shared_ptr<OrderSucceededCallbackRequest> request);
  PoolConfigResponse poolConfigWithOptions(shared_ptr<PoolConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PoolConfigResponse poolConfig(shared_ptr<PoolConfigRequest> request);
  PurchaseResourcesResponse purchaseResourcesWithOptions(shared_ptr<PurchaseResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PurchaseResourcesResponse purchaseResources(shared_ptr<PurchaseResourcesRequest> request);
  QueryBindingDetailsResponse queryBindingDetailsWithOptions(shared_ptr<QueryBindingDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBindingDetailsResponse queryBindingDetails(shared_ptr<QueryBindingDetailsRequest> request);
  QueryBlackListResponse queryBlackListWithOptions(shared_ptr<QueryBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBlackListResponse queryBlackList(shared_ptr<QueryBlackListRequest> request);
  QueryBuyPageInitDataResponse queryBuyPageInitDataWithOptions(shared_ptr<QueryBuyPageInitDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBuyPageInitDataResponse queryBuyPageInitData(shared_ptr<QueryBuyPageInitDataRequest> request);
  QueryBuyPageResCountResponse queryBuyPageResCountWithOptions(shared_ptr<QueryBuyPageResCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBuyPageResCountResponse queryBuyPageResCount(shared_ptr<QueryBuyPageResCountRequest> request);
  QueryBuyPageResInfoResponse queryBuyPageResInfoWithOptions(shared_ptr<QueryBuyPageResInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBuyPageResInfoResponse queryBuyPageResInfo(shared_ptr<QueryBuyPageResInfoRequest> request);
  QueryBuyResInfoResponse queryBuyResInfoWithOptions(shared_ptr<QueryBuyResInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBuyResInfoResponse queryBuyResInfo(shared_ptr<QueryBuyResInfoRequest> request);
  QueryCallRecordingListResponse queryCallRecordingListWithOptions(shared_ptr<QueryCallRecordingListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCallRecordingListResponse queryCallRecordingList(shared_ptr<QueryCallRecordingListRequest> request);
  QueryCertifyInfoListResponse queryCertifyInfoListWithOptions(shared_ptr<QueryCertifyInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCertifyInfoListResponse queryCertifyInfoList(shared_ptr<QueryCertifyInfoListRequest> request);
  QueryCertifyOverviewInfoResponse queryCertifyOverviewInfoWithOptions(shared_ptr<QueryCertifyOverviewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCertifyOverviewInfoResponse queryCertifyOverviewInfo(shared_ptr<QueryCertifyOverviewInfoRequest> request);
  QueryContactsListResponse queryContactsListWithOptions(shared_ptr<QueryContactsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryContactsListResponse queryContactsList(shared_ptr<QueryContactsListRequest> request);
  QueryCustInfoResponse queryCustInfoWithOptions(shared_ptr<QueryCustInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCustInfoResponse queryCustInfo(shared_ptr<QueryCustInfoRequest> request);
  QueryDownloadUrlResponse queryDownloadUrlWithOptions(shared_ptr<QueryDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDownloadUrlResponse queryDownloadUrl(shared_ptr<QueryDownloadUrlRequest> request);
  QueryEffectiveInvoiceListByBillNosResponse queryEffectiveInvoiceListByBillNosWithOptions(shared_ptr<QueryEffectiveInvoiceListByBillNosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEffectiveInvoiceListByBillNosResponse queryEffectiveInvoiceListByBillNos(shared_ptr<QueryEffectiveInvoiceListByBillNosRequest> request);
  QueryExportResUrlResponse queryExportResUrlWithOptions(shared_ptr<QueryExportResUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryExportResUrlResponse queryExportResUrl(shared_ptr<QueryExportResUrlRequest> request);
  QueryGroupDetailListResponse queryGroupDetailListWithOptions(shared_ptr<QueryGroupDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGroupDetailListResponse queryGroupDetailList(shared_ptr<QueryGroupDetailListRequest> request);
  QueryGroupInfoListResponse queryGroupInfoListWithOptions(shared_ptr<QueryGroupInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGroupInfoListResponse queryGroupInfoList(shared_ptr<QueryGroupInfoListRequest> request);
  QueryInvoiceInfoByRequestNoResponse queryInvoiceInfoByRequestNoWithOptions(shared_ptr<QueryInvoiceInfoByRequestNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryInvoiceInfoByRequestNoResponse queryInvoiceInfoByRequestNo(shared_ptr<QueryInvoiceInfoByRequestNoRequest> request);
  QueryMessageCallbackInfoResponse queryMessageCallbackInfoWithOptions(shared_ptr<QueryMessageCallbackInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMessageCallbackInfoResponse queryMessageCallbackInfo(shared_ptr<QueryMessageCallbackInfoRequest> request);
  QueryMessageQueueListResponse queryMessageQueueListWithOptions(shared_ptr<QueryMessageQueueListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMessageQueueListResponse queryMessageQueueList(shared_ptr<QueryMessageQueueListRequest> request);
  QueryMonthlyBillInfoResponse queryMonthlyBillInfoWithOptions(shared_ptr<QueryMonthlyBillInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMonthlyBillInfoResponse queryMonthlyBillInfo(shared_ptr<QueryMonthlyBillInfoRequest> request);
  QueryMonthlyStatisticsInfoResponse queryMonthlyStatisticsInfoWithOptions(shared_ptr<QueryMonthlyStatisticsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMonthlyStatisticsInfoResponse queryMonthlyStatisticsInfo(shared_ptr<QueryMonthlyStatisticsInfoRequest> request);
  QueryNoBuyTasksResponse queryNoBuyTasksWithOptions(shared_ptr<QueryNoBuyTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryNoBuyTasksResponse queryNoBuyTasks(shared_ptr<QueryNoBuyTasksRequest> request);
  QueryNoDistributeResponse queryNoDistributeWithOptions(shared_ptr<QueryNoDistributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryNoDistributeResponse queryNoDistribute(shared_ptr<QueryNoDistributeRequest> request);
  QueryOpenStatusResponse queryOpenStatusWithOptions(shared_ptr<QueryOpenStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOpenStatusResponse queryOpenStatus(shared_ptr<QueryOpenStatusRequest> request);
  QueryPackageDetailResponse queryPackageDetailWithOptions(shared_ptr<QueryPackageDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPackageDetailResponse queryPackageDetail(shared_ptr<QueryPackageDetailRequest> request);
  QueryPackageListResponse queryPackageListWithOptions(shared_ptr<QueryPackageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPackageListResponse queryPackageList(shared_ptr<QueryPackageListRequest> request);
  QueryPackageStatisticsResponse queryPackageStatisticsWithOptions(shared_ptr<QueryPackageStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPackageStatisticsResponse queryPackageStatistics(shared_ptr<QueryPackageStatisticsRequest> request);
  QueryPoolCityListResponse queryPoolCityListWithOptions(shared_ptr<QueryPoolCityListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPoolCityListResponse queryPoolCityList(shared_ptr<QueryPoolCityListRequest> request);
  QueryPoolInfoListResponse queryPoolInfoListWithOptions(shared_ptr<QueryPoolInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPoolInfoListResponse queryPoolInfoList(shared_ptr<QueryPoolInfoListRequest> request);
  QueryPoolMonthlyBillInfoResponse queryPoolMonthlyBillInfoWithOptions(shared_ptr<QueryPoolMonthlyBillInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPoolMonthlyBillInfoResponse queryPoolMonthlyBillInfo(shared_ptr<QueryPoolMonthlyBillInfoRequest> request);
  QueryPoolStatisticsInfoResponse queryPoolStatisticsInfoWithOptions(shared_ptr<QueryPoolStatisticsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPoolStatisticsInfoResponse queryPoolStatisticsInfo(shared_ptr<QueryPoolStatisticsInfoRequest> request);
  QueryPoolSummaryInfoResponse queryPoolSummaryInfoWithOptions(shared_ptr<QueryPoolSummaryInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPoolSummaryInfoResponse queryPoolSummaryInfo(shared_ptr<QueryPoolSummaryInfoRequest> request);
  QueryPurchasedInfoResponse queryPurchasedInfoWithOptions(shared_ptr<QueryPurchasedInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPurchasedInfoResponse queryPurchasedInfo(shared_ptr<QueryPurchasedInfoRequest> request);
  QueryPurchasedResListResponse queryPurchasedResListWithOptions(shared_ptr<QueryPurchasedResListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPurchasedResListResponse queryPurchasedResList(shared_ptr<QueryPurchasedResListRequest> request);
  QueryQRCodeInfoResponse queryQRCodeInfoWithOptions(shared_ptr<QueryQRCodeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryQRCodeInfoResponse queryQRCodeInfo(shared_ptr<QueryQRCodeInfoRequest> request);
  QueryRecordingUrlResponse queryRecordingUrlWithOptions(shared_ptr<QueryRecordingUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordingUrlResponse queryRecordingUrl(shared_ptr<QueryRecordingUrlRequest> request);
  QueryResSummaryInfoResponse queryResSummaryInfoWithOptions(shared_ptr<QueryResSummaryInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryResSummaryInfoResponse queryResSummaryInfo(shared_ptr<QueryResSummaryInfoRequest> request);
  QueryRingToneUrlResponse queryRingToneUrlWithOptions(shared_ptr<QueryRingToneUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRingToneUrlResponse queryRingToneUrl(shared_ptr<QueryRingToneUrlRequest> request);
  QueryRingTonesResponse queryRingTonesWithOptions(shared_ptr<QueryRingTonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRingTonesResponse queryRingTones(shared_ptr<QueryRingTonesRequest> request);
  QuerySimplePoolInfoListResponse querySimplePoolInfoListWithOptions(shared_ptr<QuerySimplePoolInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySimplePoolInfoListResponse querySimplePoolInfoList(shared_ptr<QuerySimplePoolInfoListRequest> request);
  QueryStatisticsInfoResponse queryStatisticsInfoWithOptions(shared_ptr<QueryStatisticsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryStatisticsInfoResponse queryStatisticsInfo(shared_ptr<QueryStatisticsInfoRequest> request);
  QueryTagOpenStatusResponse queryTagOpenStatusWithOptions(shared_ptr<QueryTagOpenStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTagOpenStatusResponse queryTagOpenStatus(shared_ptr<QueryTagOpenStatusRequest> request);
  QueryTransferDetailsResponse queryTransferDetailsWithOptions(shared_ptr<QueryTransferDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTransferDetailsResponse queryTransferDetails(shared_ptr<QueryTransferDetailsRequest> request);
  QueryTransferRecordResponse queryTransferRecordWithOptions(shared_ptr<QueryTransferRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTransferRecordResponse queryTransferRecord(shared_ptr<QueryTransferRecordRequest> request);
  QueryTransferRecordsResponse queryTransferRecordsWithOptions(shared_ptr<QueryTransferRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTransferRecordsResponse queryTransferRecords(shared_ptr<QueryTransferRecordsRequest> request);
  QueryUserDeleteStatusResponse queryUserDeleteStatusWithOptions(shared_ptr<QueryUserDeleteStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserDeleteStatusResponse queryUserDeleteStatus(shared_ptr<QueryUserDeleteStatusRequest> request);
  QueryUserInfoResponse queryUserInfoWithOptions(shared_ptr<QueryUserInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserInfoResponse queryUserInfo(shared_ptr<QueryUserInfoRequest> request);
  QueryUserResPoolInfoResponse queryUserResPoolInfoWithOptions(shared_ptr<QueryUserResPoolInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserResPoolInfoResponse queryUserResPoolInfo(shared_ptr<QueryUserResPoolInfoRequest> request);
  QueryVirtualOperationShowResponse queryVirtualOperationShowWithOptions(shared_ptr<QueryVirtualOperationShowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryVirtualOperationShowResponse queryVirtualOperationShow(shared_ptr<QueryVirtualOperationShowRequest> request);
  QueryWarningListResponse queryWarningListWithOptions(shared_ptr<QueryWarningListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWarningListResponse queryWarningList(shared_ptr<QueryWarningListRequest> request);
  QueryWaybillOrderInfoResponse queryWaybillOrderInfoWithOptions(shared_ptr<QueryWaybillOrderInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWaybillOrderInfoResponse queryWaybillOrderInfo(shared_ptr<QueryWaybillOrderInfoRequest> request);
  QueryWaybillOrderStatisticsInfoResponse queryWaybillOrderStatisticsInfoWithOptions(shared_ptr<QueryWaybillOrderStatisticsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWaybillOrderStatisticsInfoResponse queryWaybillOrderStatisticsInfo(shared_ptr<QueryWaybillOrderStatisticsInfoRequest> request);
  ReleaseResourceResponse releaseResourceWithOptions(shared_ptr<ReleaseResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseResourceResponse releaseResource(shared_ptr<ReleaseResourceRequest> request);
  TestTtsRingToneResponse testTtsRingToneWithOptions(shared_ptr<TestTtsRingToneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TestTtsRingToneResponse testTtsRingTone(shared_ptr<TestTtsRingToneRequest> request);
  UnbindResourceResponse unbindResourceWithOptions(shared_ptr<UnbindResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindResourceResponse unbindResource(shared_ptr<UnbindResourceRequest> request);
  UnlockResourceResponse unlockResourceWithOptions(shared_ptr<UnlockResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnlockResourceResponse unlockResource(shared_ptr<UnlockResourceRequest> request);
  UpdateContactsResponse updateContactsWithOptions(shared_ptr<UpdateContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateContactsResponse updateContacts(shared_ptr<UpdateContactsRequest> request);
  UpdateGroupDetailResponse updateGroupDetailWithOptions(shared_ptr<UpdateGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupDetailResponse updateGroupDetail(shared_ptr<UpdateGroupDetailRequest> request);
  UpdateGroupInfoResponse updateGroupInfoWithOptions(shared_ptr<UpdateGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupInfoResponse updateGroupInfo(shared_ptr<UpdateGroupInfoRequest> request);
  UpdatePoolNameResponse updatePoolNameWithOptions(shared_ptr<UpdatePoolNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePoolNameResponse updatePoolName(shared_ptr<UpdatePoolNameRequest> request);
  UpdateResRemarkResponse updateResRemarkWithOptions(shared_ptr<UpdateResRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResRemarkResponse updateResRemark(shared_ptr<UpdateResRemarkRequest> request);
  ValidateOrderResponse validateOrderWithOptions(shared_ptr<ValidateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateOrderResponse validateOrder(shared_ptr<ValidateOrderRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dypls20170830

#endif
